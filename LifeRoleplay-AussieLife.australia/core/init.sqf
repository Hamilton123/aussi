#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master client initialization file
*/

private ["_handle","_timeStamp","_server_isReady","_extDB_notLoaded"];
life_firstSpawn = true;
life_session_completed = false;
[] call mav_introcam_fnc_startCinematicCam;
[0, "Setting up client, please wait"] call mav_introcam_fnc_updateCinematicStatus;
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------ Version 5.0.0 -------------------------------------------";
diag_log "----------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil "TON_fnc_clientGangLeader")};

diag_log "::Life Client:: Received server functions.";
[0, "Waiting for server to be ready"] call mav_introcam_fnc_updateCinematicStatus;
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_HC_isActive"};
if (life_HC_isActive) then {
    waitUntil{!isNil "life_HC_server_isReady" && !isNil "life_HC_server_extDB_notLoaded"};
    _server_isReady = life_HC_server_isReady;
    _extDB_notLoaded = life_HC_server_extDB_notLoaded;
} else {
    waitUntil{!isNil "life_server_isReady" && !isNil "life_server_extDB_notLoaded"};
    _server_isReady = life_server_isReady;
    _extDB_notLoaded = life_server_extDB_notLoaded;
};

waitUntil{_server_isReady};
if (_extDB_notLoaded isEqualType []) exitWith {
    diag_log (_extDB_notLoaded select 1);
    999999 cutText [localize "STR_Init_ExtdbFail","BLACK FADED"];
    999999 cutFadeOut 99999999;
};

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
[1, "PRESS SPACE TO CONTINUE"] call mav_introcam_fnc_updateCinematicStatus;
waitUntil {mav_introcam_continue};
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

//Set bank amount for new players
switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
    };
};

switch (playerSide) do {
    case west: {
        _handle = [] spawn life_fnc_initCop;
        waitUntil {scriptDone _handle};
    };
    case civilian: {
        //Initialize Civilian Settings
        _handle = [] spawn life_fnc_initCiv;
        waitUntil {scriptDone _handle};
    };
    case independent: {
        //Initialize Medics and blah
        _handle = [] spawn life_fnc_initMedic;
        waitUntil {scriptDone _handle};
    };
};

player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["steam64ID",(getPlayerUID player),true];
player setVariable ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; //Variable OwnerID for HeadlessClient

[] spawn life_fnc_survival;

waitUntil {(missionNamespace getVariable ["life_perksInitialized", true])};

life_paycheck = life_paycheck * (missionNamespace getVariable ["mav_ttm_var_paycheckMultiplier", 1]);

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil{(!isNull (findDisplay 49)) && (!isNull (findDisplay 602))}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

CONSTVAR(life_paycheck); //Make the paycheck static.
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};

/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["HC_fnc_wantedProfUpdate",HC_Life];
} else {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];
};

life_hideoutBuildings = [];
{
    private _building = nearestBuilding getMarkerPos _x;
    life_hideoutBuildings pushBack _building;
    false
} count ["gang_area_1","gang_area_2","gang_area_3"];

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";



if (isNil "TFAR_fnc_isTeamSpeakPluginEnabled") exitwith {

	999999 cutText ["Task Force Radio is not running on your computer. Please re-sync and retry","BLACK FADED"];
	999999 cutFadeOut 99999999;
	if (player getvariable "taskfr") then {
		player setvariable ["taskfr",false,true];
	};
};



_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;

if (!(_TFenabled)) then {

	while {!([] call TFAR_fnc_isTeamSpeakPluginEnabled)} do {

		titleText ["Please enable Task Force Radio in your TS3 Plugins! || TS3 -> Settings -> Plugins", "BLACK"];
		sleep 2;
		if (player getvariable "taskfr") then {
		player setvariable ["taskfr",false,true];
		};
	};
};

Dvid_TFEnabled = true;
Dvid_onTsServer = "Life Roleplay || Erie County" == (call TFAR_fnc_getTeamSpeakServerName); ///////////////////////Edit This line (the channel at the top of your TS (where you right click and "Edit Virtual Server"), yes, get the name of that goes here)
Dvid_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
titleText ["Task Force Radio loaded succesfully","BLACK IN"];

[] spawn {

	while {true} do {

				_isadmin = false;
				if (!(isNil "life_adminlevel")) then {
					_adminlvl = life_adminlevel call BIS_fnc_parseNumber;

					if (_adminlvl > 0) then {
						_isadmin = true;
					};
				};



					_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;
					if ((!(_TFenabled)) && (Dvid_TFEnabled)) then {
					if (!(_isadmin)) then {
						titleText ["Please enable Task Force Radio in your TS3 Plugins! || TS3 -> Settings -> Plugins", "BLACK"];
						Dvid_TFEnabled = false;
					};
							if (player getvariable "taskfr") then {
								player setvariable ["taskfr",false,true];
							};
					};

					_onTsServer = "Life Roleplay || Erie County" == (call TFAR_fnc_getTeamSpeakServerName); //////////////////////Edit too pls, or dont but it wont work if you dont
					if (!(_onTsServer)) then {
					if (!(_isadmin)) then {
						titleText ["Please join the teamspeak server! Adress: scottishgamerz.teamspeak3.org", "BLACK"];
						Dvid_onTsServer = false;
					};
						if (player getvariable "taskfr") then {
							player setvariable ["taskfr",false,true];
						};
					} else {
						if (!(Dvid_onTsServer)) then {
						if (!(_isadmin)) then {
							titleText ["TS server check completed. Welcome!","BLACK IN"];
							Dvid_onTsServer = true;
							};
						if (!(player getvariable "taskfr")) then {
							player setvariable ["taskfr",true,true];
						};
						};
					};

					_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
					if (!(_onChannel)) then {
					if (!(_isadmin)) then {
						titleText ["Please reload the plugin to join the TFR channel || Settings -> Plugins -> Reload All", "BLACK"];
						Dvid_onChannel = false;
					};
						if (player getvariable "taskfr") then {
							player setvariable ["taskfr",false,true];
						};
					} else {
						if (!(Dvid_onChannel)) then {
							titleText ["TS channel check completed. Welcome!","BLACK IN"];
							Dvid_onChannel = true;
						if (!(player getvariable "taskfr")) then {
							player setvariable ["taskfr",true,true];
						};
						};
					};


					if ((_TFenabled) && (!(Dvid_TFEnabled))) then {
						titleText ["Plugin enabled, welcome back!","BLACK IN"];
						Dvid_TFEnabled = true;
						if (!(player getvariable "taskfr")) then {
							player setvariable ["taskfr",true,true];
						};
					};

          if(side player isEqualTo civilian) then {
                  _radios = player call TFAR_fnc_radiosList;
                  if(count _radios < 2) then {
                      _wtflol = call TFAR_fnc_haveLRRadio;
                      if(_wtflol) then {
                          _channel = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLRChannel;
                          _channel = _channel + 1;
                          _curfreqlr = [(call TFAR_fnc_activeLrRadio), _channel] call TFAR_fnc_getChannelFrequency;
                          _curfreqlr = parseNumber _curfreqlr;
                          if( _curfreqlr > 30 && _curfreqlr < 35 ) then {
                              hintSilent "30.1 - 34.9 are blocked frequencies.";
                              [(call TFAR_fnc_activeLrRadio), _channel, "40"] call TFAR_fnc_setChannelFrequency;
                          };
                      };
                      _wtfno = call TFAR_fnc_haveSWRadio;
                      if(_Wtfno) then {
                          _channel = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwChannel;
                          _channel = _channel + 1;
                          _curfreqsr = [(call TFAR_fnc_activeSwRadio),_channel] call TFAR_fnc_getChannelFrequency;
                          _curfreqsr = parseNumber _curfreqsr;
                          if(!isNil "_curfreqsr") then {
                             if( _curfreqsr > 30 && _curfreqsr < 35 ) then {
                              hintSilent "30.1 - 34.9 are blocked frequencies.";
                              [(call TFAR_fnc_activeSwRadio), _channel, "40"] call TFAR_fnc_setChannelFrequency;
                          };
                          };
                      };
                  } else {
                      hintSilent "Your radios are interfering with each other, drop one to fix it.";
                      {
                          if(_forEachIndex != 0) then {
                              player unassignItem (_radios select (_forEachIndex - 1));
                              player assignItem (_radios select (_forEachIndex));
                          };
                          _wtfno = call TFAR_fnc_haveSWRadio;
                          if(_Wtfno) then {
                              _channel = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwChannel;
                              _channel = _channel + 1;
                              _curfreqsr = [(call TFAR_fnc_activeSwRadio), _channel] call TFAR_fnc_getChannelFrequency;
                              if(!isNil "_curfreqsr") then {
                                  [(call TFAR_fnc_activeSwRadio), _channel, str(round(random 480)+30)] call TFAR_fnc_setChannelFrequency;
                              };
                          };
                          if((count _radios - 1) isEqualTo _forEachIndex) then {
                              player unassignItem (_radios select (_forEachIndex));
                              player assignItem (_radios select 0);
                          };
                      } forEach _radios;
                  };
              };

				sleep 2;
			};

};
