/*
	BLAH
	BLAH
*/
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["GroundWeaponHolder"],3];
_clear = _clear + nearestObjects [player,["WeaponHolderSimulated"],3];


_destroyed = 0;

for "_i" from 0 to count _clear - 1
do
{
	_tobecargo = _clear select _i;
	_mags = getMagazineCargo _tobecargo;
	_items = getItemCargo _tobecargo;
	_weapons = getWeaponCargo _tobecargo;
	clearBackpackCargo _tobecargo;
	
		if (count (_mags select 0) > 0) then {{evidence_locker addMagazineCargoGlobal [_mags select 0 select _forEachIndex,_mags select 1 select _forEachIndex]} forEach (_mags select 0); clearMagazineCargo _tobecargo;};
		if (count (_items select 0) > 0) then {{evidence_locker addItemCargoGlobal [_items select 0 select _forEachIndex,_items select 1 select _forEachIndex]} forEach (_items select 0); clearItemCargo _tobecargo; };
		if (count (_weapons select 0) > 0) then {{evidence_locker addWeaponCargoGlobal [_weapons select 0 select _forEachIndex,_weapons select 1 select _forEachIndex]} forEach (_weapons select 0);  clearWeaponCargo _tobecargo; };
	deleteVehicle (_clear select _i);
};


titleText[["Seized ground objects in the vicinity."],"PLAIN"];
