/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];

        life_actions pushBack (player addAction [ "<t color='#E74C3C'>Explode Vest</t>",{
                life_deadmanSwitch = false;
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
            },"",0,false,false,"",'vest player == "V_HarnessOGL_brn"']);

        life_actions pushBack (player addAction [ "<t color='#E74C3C'>Deadmans Switch</t>",life_fnc_suicideVest,"",1,false,false,"",'!life_deadmanSwitch && vest player == "V_HarnessOGL_brn"' ]);

    };

    case west: {

        life_actions pushBack (player addAction["Seize Objects",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']);

        life_actions pushBack (player addAction["<t color='#A52A2A'>Threat Level Menu</t>",
        {
            remoteExec ["life_fnc_threatLevel", player];
            life_threatActive = true;
        },"",6,FALSE,FALSE, "",'call life_coplevel >= 6 && !life_threatActive']);

        life_actions pushBack (player addAction["<t color='#A52A2A'>Cancel</t>",
        {
            life_threatActive = false;
        },"",6,FALSE,FALSE, "",'call life_coplevel >= 6 && life_threatActive']);
    };
};

life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
