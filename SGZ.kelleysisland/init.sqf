/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing

};
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\zlt_fastrope.sqf";
[] execVM "scripts\teargas.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "scripts\DynWeather.sqf";

StartProgress = true;
