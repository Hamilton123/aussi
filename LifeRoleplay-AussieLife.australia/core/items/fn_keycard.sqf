#include "..\..\script_macros.hpp"
/*
    File : fn_keycard.sqf
    Author: Connor

    Description:
    keycard shizz
*/
	
	switch ( playerSide ) do {
		case west: {
			player setVariable ['copLevel',1];
			hint "You have activated your keycard, you may now access doors of the police bases!";
		};
		case civilian: {
			if ( life_docRobbing ) exitWith { hint "DOC has already been attacked recently! Cooldown is 30 minutes!"; };
			if (player getVariable "copLevel" == 1) exitWith { hint "You have already activated the keycard! Cooldown is 30 minutes!"; };
			if ( player distance (getMarkerPos "jail_marker")  >= 250 ) exitWith { hint "You have to be within 250m of the DOC if you wish to break in!" };
			
			_message = "The Department of Corrections is currently under attack! Any civilians within the facility please evacuate immediately! Take cover and stay calm help is on its way!";
			
			life_docRobbing = true;
			publicVariable "life_docRobbing";
			
			player setVariable ['copLevel',1];
			[ _message,name player,4] remoteExec ["TON_fnc_clientMessage", 0];
			[doc_speaker_1, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_2, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_3, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_4, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_5, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_6, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_7, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_8, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_9, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_10, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_11, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_12, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_13, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			[doc_speaker_14, "docalarm",1000] remoteExec ["life_fnc_playSound",0];
			
			sleep 1800;
			life_docRobbing = false;
			publicVariable "life_docRobbing";
			player setVariable ['copLevel',0];
		};
	};