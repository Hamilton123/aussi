
    #include "..\..\script_macros.hpp"

    private ["_threatTable"];

    _threatTable = [

        ["Green",
        "<t size='2'><t color='#2ECC71'>Threat Level: Green</t><br></br><br></br><t size='1'><t>Routine protective security measures appropriate to the business concerned.</t>"],

        ["Amber",
         "<t size='2'><t color='#F1C40F'>Threat Level: Amber</t><br></br><br></br><t size='1'><t>Additional and sustainable protective security measures reflecting the broad nature of the threat combined with specific judgements on acceptable risk.</t>"],

        ["Red",
         "<t size='2'><t color='#E74C3C'>Threat Level: Red</t><br></br><br></br><t size='1'><t>Maximum protective security measures to meet specific threats and to minimise vulnerability and risk.</t>"]

    ];

    if (!life_threatMenu) then {
        if (side player == west) then {
            life_threatMenu = true;
            {
                player AddAction [ _x select 0,
                {
                    life_threatActive = false;
                    life_threatLevel = (_this select 3) select 0;
                    publicVariable "life_threatLevel";
                    remoteExec ["life_fnc_hudUpdate", 0];
                    [ (_this select 3) select 1,name player,4] remoteExec ["TON_fnc_clientMessage", 0];
                },_x,6,false,false,"",'life_threatActive'];

                sleep 0.1;
            } forEach _threatTable;
        };
    };
