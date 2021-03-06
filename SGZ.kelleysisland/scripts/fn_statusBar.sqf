waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: ScottishGAMERZ
	Description: Puts a small bar in the bottom right of screen to display in-game information

*/
4 cutRsc ["osefStatusBar","PLAIN"];
systemChat format["Loading ScottishGAMERZ server info...", _rscLayer];

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText format["Threat Level: %1 | Police: %2 | Civilians: %3 | Medics: %4 | CASH: %5 | BANK: %6 | GRIDREF: %7 ", life_threatLevel, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText,mapGridPosition player, _counter];
	};
};
