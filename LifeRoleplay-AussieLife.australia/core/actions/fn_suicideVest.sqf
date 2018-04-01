

    #include "..\..\script_macros.hpp"

    if ( side player == west ) exitWith {};

    if ( side player == independent ) exitWith {};

    private "_nearMen";

    hint "Deadmans Switch is now active!";
    life_deadmanSwitch = true;



    waitUntil{ (vest player != "V_HarnessOGL_brn") or !( alive player ) or (life_istazed) or (player getVariable "restrained") or (life_isknocked) };

    if ( life_deadmanSwitch ) then {
        _nearMen = player nearEntities [["Man", "Air", "Car", "Tank"], 20];
        {
            _x setDamage 1.0;
        } forEach (_nearMen);
        _clear = nearestObjects [player,["weaponholder"],3];
        _clear = _clear + nearestObjects [player,["GroundWeaponHolder"],3];
        _clear = _clear + nearestObjects [player,["WeaponHolderSimulated"],3];
        _destroyed = 0;
        for "_i" from 0 to count _clear - 1
        do
        {
        	_destroyed = _destroyed + 1;
        	deleteVehicle (_clear select _i);
        };
        removeHeadgear player:
        removeGoggles player;
        removeVest player;
        removeBackpack player;
        removeUniform player;
        removeAllWeapons player:
        removeAllAssignedItems player;
        forceRespawn player;
        _bomb = "Bo_Mk82" createVehicle [0,0,9999];
        _bomb setPos (getPos player);
        _bomb setVelocity [100,0,0];
        [0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
        life_deadmanSwitch = false;
    };
