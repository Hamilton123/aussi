#include "..\..\script_macros.hpp"
/*
    File: fn_bankDepositAll.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Definitely not a deposit all script
*/
if(CASH isEqualTo 0) exitWith {hint "You don't have any money to deposit!"};

private "_pockets";

_pockets = CASH;

BANK = BANK + _pockets;
CASH = CASH - _pockets;

hint format[localize "STR_ATM_DepositAllSuccess"];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
