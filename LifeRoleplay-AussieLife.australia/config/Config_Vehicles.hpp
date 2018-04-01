class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Cuda_01", "" },
            { "Jonzie_Raptor", "" },
            { "Jonzie_XB", "" },
            { "RDS_Gaz24_Civ_01", "" },
            { "RDS_Golf4_Civ_01", "" },
			{ "RDS_JAWA353_Civ_01", "" },
            { "Jonzie_Quattroporte", "" },
            { "Jonzie_Ceed", "" },
            { "Jonzie_Galant", "" },
            { "Jonzie_Mini_Cooper", "" },
			{ "RDS_Octavia_Civ_01", "" },
            { "Jonzie_Corolla", "" },
            { "RDS_Lada_Civ_01", "" },
            { "RDS_tt650_Civ_01", "" },
            { "2006Charger_01", "" },
			{ "Escalade_01", "" },
            { "Chironlu_civ_noir", "" },
            { "Smart_01", "" },
            { "BMWM4_01", "" },
			{ "Jonzie_VE", "" }
        };
    };

	// Car Dealerships
	class civ_car_bmw {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "X5_01", "" },
            { "X5_02", "" },
            { "X5_03", "" },
            { "X5_04", "" },
            { "X5_05", "" },
			{ "X5_06", "" },
            { "X5_07", "" },
            { "X5_08", "" },
            { "X5_01", "" },
            { "BMWM4_01", "" },
			{ "BMWM4_02", "" },
            { "BMWM4_03", "" },
            { "BMWM4_04", "" },
            { "BMWM4_05", "" },
            { "BMWM4_06", "" },
			{ "BMWM4_07", "" },
            { "BMWM4_08", "" },
            { "Jonzie_30CSL", "" },
            { "M5lu_civ", "" },
			{ "M5lu_bleu", "" },
			{ "M5lu_yellow", "" },
			{ "M5lu_noir", "" },
			{ "M5lu_rouge", "" },
			{ "A3L_BMW_M6_Black", "" },
			{ "A3L_BMW_M6_DarkBlue", "" },
			{ "A3L_BMW_M6_Grey", "" },
			{ "A3L_BMW_M6_Orange", "" },
			{ "A3L_BMW_M6_Pink", "" },
			{ "A3L_BMW_M6_Purple", "" },
			{ "A3L_BMW_M6_Red", "" },
			{ "A3L_BMW_M6_White", "" },
			{ "A3L_BMW_M6_Yellow", "" }
        };
    };

	class civ_car_ford {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Mustang_01", "" },
            { "Mustang_02", "" },
            { "Mustang_03", "" },
            { "Mustang_04", "" },
            { "Mustang_05", "" },
			{ "Mustang_06", "" },
            { "Mustang_07", "" },
            { "Mustang_08", "" },
            { "2017Taurus_01", "" },
            { "2017Taurus_02", "" },
			{ "2017Taurus_03", "" },
            { "2017Taurus_04", "" },
            { "2017Taurus_05", "" },
            { "2017Taurus_06", "" },
            { "2017Taurus_07", "" },
			{ "2017Taurus_08", "" },
            { "CV_01", "" },
			{ "CV_02", "" },
			{ "CV_03", "" },
			{ "CV_04", "" },
			{ "CV_05", "" },
			{ "CV_06", "" },
			{ "CV_07", "" },
			{ "CV_08", "" },
            { "Explorerlu_civ", "" },
            { "Explorerlu_bleu", "" },
			{ "Explorerlu_gris", "" },
			{ "Explorerlu_yellow", "" },
			{ "Explorerlu_noir", "" },
			{ "Explorerlu_rouge", "" },
			{ "Jonzie_XB", "" },
			{ "Mk3lu_civ", "" },
            { "Mk3lu_bleu", "" },
			{ "EMk3lu_gris", "" },
			{ "Mk3lu_yellow", "" },
			{ "Mk3lu_noir", "" },
			{ "Mk3lu_rouge", "" }
        };
    };

	class civ_car_greg {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Cuda_01", "" },
            { "Jonzie_Raptor", "" },
            { "Jonzie_XB", "" },
            { "RDS_Gaz24_Civ_01", "" },
            { "RDS_Golf4_Civ_01", "" },
			{ "RDS_JAWA353_Civ_01", "" },
            { "Jonzie_Quattroporte", "" },
            { "Jonzie_Ceed", "" },
            { "Jonzie_Galant", "" },
            { "Jonzie_Mini_Cooper", "" },
			{ "RDS_Octavia_Civ_01", "" },
            { "Jonzie_Corolla", "" },
            { "RDS_Lada_Civ_01", "" },
            { "RDS_tt650_Civ_01", "" },
            { "2006Charger_01", "" },
			{ "Escalade_01", "" },
            { "Chironlu_civ_noir", "" },
            { "Smart_01", "" },
            { "BMWM4_01", "" },
			{ "Jonzie_VE", "" }
        };
    };

		class civ_car_super {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "F12lu_civ", "" },
            { "F12lu_bleu", "" },
            { "F12lu_gris", "" },
            { "F12lu_yellow", "" },
            { "F12lu_noir", "" },
			{ "F12lu_rouge", "" },
            { "FFlu_civ", "" },
            { "FFlu_bleu", "" },
            { "FFlu_gris", "" },
            { "FFlu_yellow", "" },
            { "FFlu_noir", "" },
			{ "FFlu_rouge", "" },
            { "Gallardolu_civ", "" },
            { "Gallardolu_bleu", "" },
            { "Gallardolu_gris", "" },
            { "Gallardolu_yellow", "" },
            { "Gallardolu_noir", "" },
			{ "Gallardolu_rouge", "" },
			{ "Subaru_01", "" },
			{ "Subaru_02", "" },
			{ "Subaru_03", "" },
			{ "Subaru_04", "" },
			{ "Subaru_05", "" },
			{ "Subaru_06", "" },
			{ "Subaru_07", "" },
			{ "Subaru_08", "" },
			{ "2006Charger_01", "" },
			{ "2006Charger_02", "" },
			{ "2006Charger_03", "" },
			{ "2006Charger_04", "" },
			{ "2006Charger_05", "" },
			{ "2006Charger_06", "" },
			{ "2006Charger_07", "" },
			{ "2006Charger_08", "" },
			{ "Bentley_01", "" },
			{ "Bentley_02", "" },
			{ "Bentley_03", "" },
			{ "Bentley_04", "" },
			{ "Bentley_05", "" },
			{ "Bentley_06", "" },
			{ "Bentley_07", "" },
			{ "Bentley_08", "" },
			{ "Chironlu_civ", "" },
            { "Chironlu_bleu", "" },
            { "Chironlu_gris", "" },
            { "Chironlu_yellow", "" },
            { "Chironlu_noir", "" },
			{ "Chironlu_rouge", "" },
			{ "Wraithlu_civ", "" },
            { "Wraithlu_bleu", "" },
            { "Wraithlu_gris", "" },
            { "Wraithlu_yellow", "" },
            { "Wraithlu_noir", "" },
			{ "Wraithlu_rouge", "" }
        };
    };

	// ssssss


    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

	class car_ws {
        side = "civ";
        conditions = "license_civ_wholesaler_cars";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Jonzie_Box_Truck", "" },
            { "Jonzie_Superliner", "" },
            { "Jonzie_Tow_Truck", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "Jonzie_Forklift", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" },
			{ "Jonzie_Transit", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "EC635_Unarmed", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {

			{ "Jonzie_Viper", "" },
            { "A3L_EvoBlack", "" },
			{ "A3L_Evorally_white", "" },
            { "RS6_Avantlu_civ_gris", "" },
            { "F12lu_civ_noir", "" },
            { "F12lu_civ_rouge", "" },
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "M_StretchLimo_Armed", "" },
			{ "Cuda_01", "" },
            { "Jonzie_Raptor", "" },
            { "Jonzie_XB", "" },
            { "RDS_Gaz24_Civ_01", "" },
            { "RDS_Golf4_Civ_01", "" },
			{ "RDS_JAWA353_Civ_01", "" },
            { "Jonzie_Quattroporte", "" },
            { "Jonzie_Ceed", "" },
            { "Jonzie_Galant", "" },
            { "Jonzie_Mini_Cooper", "" },
			{ "RDS_Octavia_Civ_01", "" },
            { "Jonzie_Corolla", "" },
            { "RDS_Lada_Civ_01", "" },
            { "RDS_tt650_Civ_01", "" },
            { "2006Charger_01", "" },
			{ "Escalade_01", "" },
            { "Chironlu_civ_noir", "" },
            { "Smart_01", "" },
            { "BMWM4_01", "" },
			{ "Jonzie_VE", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" }
        };
    };

    class reb_air {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "O_Heli_Light_02_F", "" },
            { "	O_Heli_Light_02_unarmed_F", "" },
            { "B_Heli_Light_01_stripped_F", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "Jonzie_Ambulance", "" },
            { "2016Taurus_EMS", "" },
			{ "Escaldae_EMS", "" },
			{ "2013Tahoe_EMS", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "SCmod_CL415", "" },
            { "SCmod_ecyreuil", "" },
			{ "SCmod_puma_SC", "" },
			{ "MI290_Taru_SC", "" },
			{ "CH49_Mohawk_SC", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "A3L_CVPIFPBPD", "call life_coplevel >= 2" },
			{ "A3L_TaurusFPBCSO", "call life_coplevel >= 3" },
			{ "CVPD_01", "call life_coplevel >= 4" },
            { "2012ChargerPD_01", "call life_coplevel >= 4" },
            { "2013TahoePD_01", "call life_coplevel >= 4" },
            { "2016TaurusPD_01", "call life_coplevel >= 4" },
            { "Evo_XSo4", "call life_coplevel >= 4" },
            { "GMCUC_11", "license_cop_sert" },
            { "GMCUC_01", "license_cop_sert" },
            { "SubaruUC_11", "license_cop_sert || license_cop_fbi" },
			{ "burnes_panther", "license_cop_sert || license_cop_fbi" },
			{ "BMWM4UC_01", "license_cop_sert || license_cop_fbi" },
			{ "X5UC_01", "license_cop_sert" },
			{ "DAR_SWATPolice", "license_cop_sert" },
			{ "EscaldaeUC_01", "license_cop_sert || call life_coplevel >= 5" },
			{ "EscaldaeUC_11", "license_cop_sert || call life_coplevel >= 5" },
			{ "EscaldaeUC_05", "license_cop_sert || call life_coplevel >= 5" },
			{ "2012ChargerUC_07", "license_cop_sert || call life_coplevel >= 4" },
			{ "2012ChargerUC_11", "license_cop_sert || call life_coplevel >= 4" },
            { "2012ChargerUC_01", "license_cop_sert || call life_coplevel >= 4" },
            { "2013TahoeUC_01", "call life_coplevel >= 4" },
			{ "2013TahoeUC_11", "call life_coplevel >= 4" },
			{ "2016TaurusUC_11", "call life_coplevel >= 4" },
            { "2016TaurusUC_01", "call life_coplevel >= 4" },
			{ "CVUC_11", "call life_coplevel >= 4" },
			{ "CVUC_01", "call life_coplevel >= 4" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "license_cop_cAir || license_cop_sert";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "EC635_Unarmed_BW", "" },
            { "I_Heli_light_03_unarmed_F", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class C_Heli_Light_01_civil_F {
        vItemSpace = 250;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

	class EC635_Unarmed {
        vItemSpace = 450;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 150;
        conditions = "";
        price = 210000;
        textures[] = {};
    };

	class Jonzie_Ambulance {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class A3L_CVPIFPBPD {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class A3L_TaurusFPBCSO {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class M_StretchLimo_Armed {
        vItemSpace = 150;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };

	class 2016Taurus_EMS {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class Escaldae_EMS {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class 2013Tahoe_EMS {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class SCmod_CL415 {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class SCmod_ecyreuil {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class SCmod_puma_SC {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class MI290_Taru_SC {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class CH49_Mohawk_SC {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir";
        price = 200000;
        textures[] = {};
    };


    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Police", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg";
        price = 75000;
        textures[] = { };
    };

    class B_GEN_Van_02_transport_F {
        vItemSpace = 175;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class B_GEN_Van_02_vehicle_F {
        vItemSpace = 175;
        conditions = "";
        price = 75000;
        textures[] = {};
    };


    class C_Offroad_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 350000;
        textures[] = {   };
    };


    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 1000000;
        textures[] = { };
    };

	class burnes_panther {
        vItemSpace = 65;
        conditions = "";
        price = 1000000;
        textures[] ={
            { "SERT OP BLACK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
	};

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat";
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking";
        price = 350000;
        textures[] = { };
    };

	class Cuda_01 {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 200000;
        textures[] = {};
    };

	class Jonzie_Raptor {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 100000;
			textures[] = {};
		};

	class Jonzie_XB {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 75000;
			textures[] = {};
		};

	class RDS_Gaz24_Civ_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 20000;
			textures[] = {};
		};

	class RDS_Golf4_Civ_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 50000;
			textures[] = {};
		};

	class RDS_JAWA353_Civ_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 15000;
			textures[] = {};
		};

	class Jonzie_Quattroporte {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 325000;
			textures[] = {};
		};

	class Jonzie_Ceed {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 42000;
			textures[] = {};
		};

	class Jonzie_Galant {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 27000;
			textures[] = {};
		};

	class Jonzie_Mini_Cooper {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 60000;
			textures[] = {};
		};

	class RDS_Octavia_Civ_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 53000;
			textures[] = {};
		};

	class Jonzie_Corolla {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 43000;
			textures[] = {};
		};

	class RDS_Lada_Civ_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 23000;
			textures[] = {};
		};

	class RDS_tt650_Civ_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 33000;
			textures[] = {};
		};

	class Escalade_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 410000;
			textures[] = {};
		};

	class Smart_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 45000;
			textures[] = {};
		};

	class BMWM4_01 {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 450000;
			textures[] = {};
		};

	class Jonzie_VE {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 27000;
			textures[] = {};
		};

	class Jonzie_Viper {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 77000;
			textures[] = {};
		};


	class A3L_EvoBlack {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 57000;
			textures[] = {};
		};

	class A3L_Evorally_white {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 57000;
			textures[] = {};
		};

	class RS6_Avantlu_civ_gris {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 47000;
			textures[] = {};
		};

	class F12lu_civ_noir {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 47000;
			textures[] = {};
		};

	class BMWM4UC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 47000;
			textures[] = {};
		};

	class B_Quadbike_01_F {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 77000;
			textures[] = {};
		};

	class B_G_Offroad_01_F {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 72020;
			textures[] = {};
		};

	class O_MRAP_02_F {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 800000;
			textures[] = {};
		};

	class B_Heli_Light_01_stripped_F {
			vItemSpace = 150;
			conditions = "license_civ_driver";
			price = 65000;
			textures[] = {};
		};

	class CVPD_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class Jonzie_Forklift {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class 2012ChargerPD_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2013TahoePD_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2016TaurusPD_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class Evo_XSo4 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class GMCUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class GMCUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class SubaruUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class SubaruUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class SubaruPD_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class X5UC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class DAR_SWATPolice {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class EscaldaeUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class EscaldaeUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class EscaldaeUC_05 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2012ChargerUC_07 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2012ChargerUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2012ChargerUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2013TahoeUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2013TahoeUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2016TaurusUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class 2016TaurusUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class RS3lu_civ_P {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class M5lu_civ_P {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class Explorerlu_P {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class Tahoelu_P {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class Mustanglu_P {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class A45Plu {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class CVUC_11 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class CCVUC_01 {
			vItemSpace = 150;
			conditions = "";
			price = 10;
			textures[] = {};
		};

	class Jonzie_Box_Truck {
			vItemSpace = 750;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Jonzie_Superliner {
			vItemSpace = 550;
			conditions = "";
			price = 122000;
			textures[] = {};
		};

	class Jonzie_Tow_Truck {
			vItemSpace = 250;
			conditions = "";
			price = 124000;
			textures[] = {};
		};

	class B_Truck_01_transport_F {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class O_Truck_03_covered_F {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class F12lu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 420000;
			textures[] = {};
		};

	class F12lu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 420000;
			textures[] = {};
		};

	class F12lu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 420000;
			textures[] = {};
		};

	class F12lu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 420000;
			textures[] = {};
		};

	class F12lu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 420000;
			textures[] = {};
		};

	class F12lu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 420000;
			textures[] = {};
		};

	class FFlu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class FFlu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class FFlu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class FFlu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class FFlu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class FFlu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Gallardolu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Gallardolu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Gallardolu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Gallardolu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Gallardolu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Gallardolu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 450000;
			textures[] = {};
		};

	class Subaru_01 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_02 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_03 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_04 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_05 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_06 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_07 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class Subaru_08 {
			vItemSpace = 150;
			conditions = "";
			price = 150000;
			textures[] = {};
		};

	class 2006Charger_01 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_02 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_03 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_04 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_05 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_06 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_07 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class 2006Charger_08 {
			vItemSpace = 150;
			conditions = "";
			price = 310000;
			textures[] = {};
		};

	class Bentley_01 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_02 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_03 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_04 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_05 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_06 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_07 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Bentley_08 {
			vItemSpace = 150;
			conditions = "";
			price = 350000;
			textures[] = {};
		};

	class Chironlu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 2300000;
			textures[] = {};
		};

	class Chironlu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 2300000;
			textures[] = {};
		};

	class Chironlu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 2300000;
			textures[] = {};
		};

	class Chironlu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 2300000;
			textures[] = {};
		};

	class Chironlu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 2300000;
			textures[] = {};
		};

	class Chironlu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 2300000;
			textures[] = {};
		};

	class Wraithlu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 1300000;
			textures[] = {};
		};

	class Wraithlu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 1300000;
			textures[] = {};
		};

	class Wraithlu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 1300000;
			textures[] = {};
		};

	class Wraithlu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 1300000;
			textures[] = {};
		};

	class Wraithlu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 1300000;
			textures[] = {};
		};

	class Wraithlu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 1300000;
			textures[] = {};
		};

	class Mustang_01 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_02 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_03 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_04 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_05 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_06 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_07 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class Mustang_08 {
			vItemSpace = 150;
			conditions = "";
			price = 250000;
			textures[] = {};
		};

	class 2017Taurus_01 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_02 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_03 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_04 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_05 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_06 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_07 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class 2017Taurus_08 {
			vItemSpace = 150;
			conditions = "";
			price = 90000;
			textures[] = {};
		};

	class CV_01 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_02 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_03 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_04 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_05 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_06 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_07 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class CV_08 {
			vItemSpace = 150;
			conditions = "";
			price = 50000;
			textures[] = {};
		};

	class Explorerlu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Explorerlu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Explorerlu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Explorerlu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Explorerlu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Explorerlu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Mk3lu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 78000;
			textures[] = {};
		};

	class Mk3lu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 78000;
			textures[] = {};
		};

	class EMk3lu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 78000;
			textures[] = {};
		};

	class Mk3lu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 78000;
			textures[] = {};
		};

	class Mk3lu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 78000;
			textures[] = {};
		};

	class Mk3lu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 78000;
			textures[] = {};
		};

	class X5_01 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_02 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_03 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_04 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_05 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_06 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_07 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class X5_08 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};


	class BMWM4_02 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class BMWM4_03 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class BMWM4_04 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class BMWM4_05 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class BMWM4_06 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class BMWM4_07 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class BMWM4_08 {
			vItemSpace = 150;
			conditions = "";
			price = 180000;
			textures[] = {};
		};

	class Jonzie_30CSL {
			vItemSpace = 150;
			conditions = "";
			price = 80000;
			textures[] = {};
		};

	class M5lu_civ {
			vItemSpace = 150;
			conditions = "";
			price = 98000;
			textures[] = {};
		};

	class M5lu_bleu {
			vItemSpace = 150;
			conditions = "";
			price = 98000;
			textures[] = {};
		};

	class M5lu_gris {
			vItemSpace = 150;
			conditions = "";
			price = 98000;
			textures[] = {};
		};

	class M5lu_yellow {
			vItemSpace = 150;
			conditions = "";
			price = 98000;
			textures[] = {};
		};

	class M5lu_noir {
			vItemSpace = 150;
			conditions = "";
			price = 98000;
			textures[] = {};
		};

	class M5lu_rouge {
			vItemSpace = 150;
			conditions = "";
			price = 98000;
			textures[] = {};
		};

	class A3L_BMW_M6_Black {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_DarkBlue {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_Grey {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_Orange {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_Pink {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_Purple {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_Red {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_White {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class A3L_BMW_M6_Yellow {
			vItemSpace = 150;
			conditions = "";
			price = 130000;
			textures[] = {};
		};

	class C_Van_01_fuel_F {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class I_Truck_02_fuel_F {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class B_Truck_01_fuel_F {
			vItemSpace = 150;
			conditions = "";
			price = 120000;
			textures[] = {};
		};

	class Jonzie_Transit {
			vItemSpace = 350;
			conditions = "";
			price = 90000;
			textures[] = {};
		};



    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};


};
