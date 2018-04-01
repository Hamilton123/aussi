/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "RH_m9c", "", 1500, 500, "" },
            { "RH_cz75", "", 2500, -1, "" },
            { "RH_mp412", "", 4500, -1, "" },
            { "RH_sbr9", "", 25000, -1, "" },
            { "RH_vp70", "", 9500, -1, "" }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 25, 15, "" },
            { "RH_16Rnd_9x19_CZ", "", 50, 25, "" },
            { "RH_6Rnd_357_Mag", "", 45, 15, "" },
            { "RH_32Rnd_9mm_M822", "", 125, 15, "" },
            { "RH_18Rnd_9x19_VP", "", 75, 45, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "NVGoggles", "", 2500, 1250, "" },
			      { "NVGoggles_OPFOR", "", 2500, 1250, "" },
            { "Binocular", "", 250, 125, "" },
            { "ItemGPS", "", 125, 50, "" },
            { "FirstAidKit", "", 1250, 750, "" },
            { "tf_anprc152", "", 500, 250, "" },
            { "RH_ar10", "", 50000, 12500, "" },
            { "hlc_rifle_slr107u", "", 30000, 15000, "" },
            { "hlc_rifle_bcmjack", "", 35000, 25000, "" },
            { "hlc_rifle_G36A1", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" }, //Apex DLC
            { "RH_hk416_wdl", "", 45000, 15000, "" },
            { "RH_m16a4_des", "", 40000, 16500, "" },
            { "RH_m110", "", 50000, 16500, "" },
            { "RH_m4a1_ris_wdl", "", 30000, 16500, "" },
            { "RH_sbr9_wdl", "", 40000, 16500, "" },
            { "hlc_rifle_aek971worn", "", 40000, 15000, "" },
            { "RH_Deagleg", "", 33000, 12000, "" },
            { "RH_mak", "", 250000, 10000, "" },
            { "srifle_GM6_F", "", 275000, 12500, "" },
			      { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
      			{ "optic_Arco_ghex_F", "", 7500, 3750, "" },
      			{ "optic_ERCO_blk_F", "", 7500, 3750, "" },
      			{ "optic_ERCO_khk_F", "", 7500, 3750, "" },
      			{ "optic_KHS_blk", "", 7500, 3750, "" },
      			{ "optic_KHS_hex", "", 7500, 3750, "" },
      			{ "optic_LRPS", "", 7500, 3750, "" },
      			{ "optic_MRCO", "", 7500, 3750, "" },
      			{ "optic_AMS_khk", "", 7500, 3750, "" },
      			{ "optic_AMS", "", 7500, 3750, "" },
      			{ "optic_AMS_snd", "", 7500, 3750, "" },
      			{ "bipod_01_F_snd", "", 7500, 3750, "" },
      			{ "bipod_01_F_blk", "", 7500, 3750, "" },
      			{ "optic_DMS", "", 7500, 3750, "" },
			      { "optic_DMS_ghex_F", "", 7500, 3750, "" },
			      { "optic_Arco_blk_F", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 300, 150, "" },
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "RH_30Rnd_556x45_M855A1", "", 275, 140, "" },
            { "RH_32Rnd_9mm_M822", "", 500, 250, "" },
            { "hlc_30Rnd_545x39_B_AK", "", 500, 250, "" },
            { "RH_7Rnd_50_AE", "", 500, 250, "" },
            { "RH_8Rnd_9x18_Mak", "", 500, 250, "" },
            { "RH_20Rnd_762x51_M80A1", "", 0, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" }, //Apex DLC
            { "7Rnd_408_Mag", "", 3500, 150, "" }, //Apex DLC
            { "150Rnd_93x64_Mag", "", 3000, 150, "" }, //Apex DLC
            { "130Rnd_338_Mag", "", 2500, 140, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
			{ "optic_Arco_ghex_F", "", 7500, 3750, "" },
			{ "optic_ERCO_blk_F", "", 7500, 3750, "" },
			{ "optic_ERCO_khk_F", "", 7500, 3750, "" },
			{ "optic_KHS_blk", "", 7500, 3750, "" },
			{ "optic_KHS_hex", "", 7500, 3750, "" },
			{ "optic_LRPS", "", 7500, 3750, "" },
			{ "optic_MRCO", "", 7500, 3750, "" },
			{ "optic_AMS_khk", "", 7500, 3750, "" },
			{ "optic_AMS", "", 7500, 3750, "" },
			{ "optic_AMS_snd", "", 7500, 3750, "" },
			{ "bipod_01_F_snd", "", 7500, 3750, "" },
			{ "bipod_01_F_blk", "", 7500, 3750, "" },
			{ "optic_DMS", "", 7500, 3750, "" },
			{ "optic_DMS_ghex_F", "", 7500, 3750, "" },
			{ "optic_Arco_blk_F", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "RH_m9c", "", 1500, 500, "" },
            { "RH_cz75", "", 2500, -1, "" },
            { "RH_mp412", "", 4500, -1, "" },
            { "tf_anprc152", "", 500, 250, "" },
            { "RH_vp70", "", 9500, -1, "" }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 25, 100, "" },
            { "RH_16Rnd_9x19_CZ", "", 50, 100, "" },
            { "RH_6Rnd_357_Mag", "", 45, 100, "" },
            { "RH_18Rnd_9x19_VP", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

	// WholeSaler Shops
	
	 class ws_cloth {
        name = "Clothing Wholesaler";
        side = "civ";
        conditions = "license_civ_wholesaler_clothing";
        items[] = {
            { "A3L_CivShirtKappa", "", 300, -1, "" },
            { "A3L_CivShirtPepe", "", 300, 45, "" },
            { "rds_uniform_citizen1", "", 350, 35, "" },
            { "rds_uniform_citizen2", "", 350, 25, "" },
            { "rds_uniform_citizen3", "", 350, -1, "" },
			{ "rds_uniform_citizen4", "", 350, 250, "" },
            { "rds_uniform_Functionary1", "", 550, 65, "" },
            { "rds_uniform_Functionary2", "", 550, 980, "" },
			{ "rds_uniform_Profiteer1", "", 550, 980, "" },
			{ "rds_uniform_Profiteer2", "", 550, 980, "" },
			{ "rds_uniform_Profiteer3", "", 550, 980, "" },
			{ "rds_uniform_Profiteer4", "", 550, 980, "" },
			{ "rds_uniform_Rocker1", "", 550, 980, "" },
			{ "rds_uniform_Rocker2", "", 550, 980, "" },
			{ "rds_uniform_Rocker3", "", 550, 980, "" },
			{ "rds_uniform_Rocker4", "", 550, 980, "" },
			{ "TRYK_shirts_BLK_PAD_BLU3", "", 550, 980, "" },
			{ "rds_uniform_Woodlander1", "", 550, 980, "" },
			{ "rds_uniform_Woodlander2", "", 550, 980, "" },
			{ "rds_uniform_Woodlander3", "", 550, 980, "" },
			{ "rds_uniform_Woodlander4", "", 550, 980, "" },
			{ "rds_uniform_Worker1", "", 550, 980, "" },
			{ "rds_uniform_Worker2", "", 550, 980, "" },
			{ "rds_uniform_Worker3", "", 550, 980, "" },
			{ "rds_uniform_Worker4", "", 550, 980, "" }

        };
        mags[] = {};
        accs[] = {};
    };
	
	class ws_super {
        name = "Supermarket Wholesaler";
        side = "civ";
        conditions = "license_civ_wholesaler_supermarket";
        items[] = {
            { "plp_bo_inv_GlassAperitif", "", 150, -1, "" },
            { "plp_bo_inv_GlassCocktail", "", 100, 45, "" },
            { "plp_bo_inv_GlassDrink", "", 50, 35, "" },
            { "plp_bo_inv_CigarCutter", "", 50, 25, "" },
            { "plp_bo_inv_Cigar", "", 50, -1, "" },
			{ "plp_bo_inv_BottleBitters", "", 500, 250, "" },
            { "plp_bo_inv_BottleBlueCorazol", "", 150, 65, "" },
            { "plp_bo_inv_BottleLiqCream", "", 2000, 980, "" },
			{ "plp_bo_inv_BottleGin", "", 2000, 980, "" },
			{ "plp_bo_inv_BottleLiqOrange", "", 2000, 980, "" },
			{ "plp_bo_inv_BottleTequila", "", 2000, 980, "" },
			{ "plp_bo_inv_CigarBoxSealed", "", 2000, 980, "" },
			{ "plp_bo_inv_Lifebelt", "", 2000, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
	class ws_firearms {
        name = "Firearms Wholesaler";
        side = "civ";
        conditions = "license_civ_wholesaler_firearms";
        items[] = {
            { "hlc_smg_mp5k_PDW", "", 15000, -1, "" },
            { "hlc_smg_mp510", "", 15000, 45, "" },
            { "RH_M16a1", "", 25000, 35, "" },
            { "RH_sbr9_des", "", 12250, 25, "" },
            { "RH_m9", "", 50, -1, "" },
			{ "tf_anprc152", "", 500, 250, "" },
            { "RH_cz75", "", 150, 65, "" },
            { "RH_g19t", "", 2000, 980, "" },
			{ "RH_m1911", "", 2000, 980, "" },
			{ "RH_mk2", "", 2000, 980, "" },
			{ "RH_p226", "", 200++0, 980, "" },
			{ "RH_usp", "", 2000, 980, "" }
        };
        mags[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 100, 0, "" },
			{ "RH_20Rnd_556x45_Mk262", "", 200, 0, "" },
            { "RH_32Rnd_9mm_HPSB", "", 110, 0, "" },
			{ "RH_15Rnd_9x19_M9", "", 120, 0, "" },
			{ "RH_16Rnd_9x19_CZ", "", 120, 0, "" },
			{ "RH_17Rnd_9x19_g17", "", 120, 0, "" },
			{ "RH_7Rnd_45cal_m1911", "", 120, 0, "" },
            { "RH_10Rnd_22LR_mk2", "", 120, 0, "" },
			{ "RH_15Rnd_9x19_SIG", "", 120, 0, "" },
			{ "RH_12Rnd_45cal_usp", "", 120, 0, "" }
        };
        accs[] = {};
    };
	
	class ws_other {
        name = "Random Stuff Wholesaler";
        side = "civ";
        conditions = "license_civ_wholesaler_OtherStuff";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
			{ "tf_anprc152", "", 500, 250, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
			      { "tf_anprc152", "", 500, 250, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "EC Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 0, -1, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
            { "TRYK_SPgear_PHC2_NV", "", 0, 0, "license_cop_fbi" },
			{ "tf_anprc152", "", 0, 0, "" },
            { "HandGrenade_Stone", "Flashbang", 0, 0, "" },
            { "SmokeShellYellow", "Tear Gas", 0, 0, "call life_coplevel >= 6" },
            { "DDOPP_X26", "", 0, 0, "" },
			{ "hlc_smg_mp5a4", "",0, 0, "call life_coplevel >= 1" },
			{ "RH_g17", "",0, 0, "call life_coplevel >= 1" },
			{ "RH_m4", "",0, 0, "call life_coplevel >= 2" },
			{ "RH_M4_ris", "",0, 0, "call life_coplevel >= 3" },
			{ "RH_M4A1_ris", "",0, 0, "call life_coplevel >= 3" },
			{ "hlc_rifle_M4", "",0, 0, "call life_coplevel >= 4" },
			{ "RH_M4_moe", "",0, 0, "call life_coplevel >= 5" },
			{ "hlc_rifle_CQBR", "",0, 0, "call life_coplevel >= 5" },
			{ "RH_SR25EC", "",0, 0, "call life_coplevel >= 5" },
			{ "RH_Hk416s", "",0, 0, "call life_coplevel >= 6" },
			{ "hlc_rifle_samr2", "",0, 0, "call life_coplevel >= 7" },
			{ "RH_M4_moe_b", "",0, 0, "license_cop_sert" },
			{ "hlc_rifle_RU556", "",0, 0, "license_cop_sert" },
			{ "hlc_rifle_bcmjack", "",0, 0, "license_cop_sert" },
			{ "RH_M4m_b", "",0, 0, "license_cop_sert" },
			{ "RH_M4A6", "",0, 0, "license_cop_sert" },
			{ "RH_Mk11", "",0, 0, "license_cop_sert" },
			{ "RH_Hk416", "",0, 0, "license_cop_sert" },
			{ "RH_fnp45", "",0, 0, "license_cop_sert" },
			{ "RH_uspm", "",0, 0, "license_cop_sert" },
			{ "RH_fn57", "",0, 0, "license_cop_sert" },
      { "RH_Mk12mod1", "",0, 0, "license_cop_fbi" },
			{ "hlc_rifle_PSG1A1_RIS", "",0, 0, "license_cop_sert" },
			{ "hlc_rifle_G36CTac", "",0, 0, "license_cop_sert" },

            { "RH_compM2l", "", 0, 0, "" },
			{ "RH_ta01nsn", "", 0, 0, "license_cop_sert" },
			{ "optic_DMS", "", 0, 0, "license_cop_sert" },
			{ "optic_MRCO", "", 0, 0, "" },
			{ "optic_AMS", "", 0, 0, "call life_coplevel >= 5" },
            { "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
			{ "optic_Arco_blk_F", "", 0, 0, "" },
			{ "RH_qdss_nt4", "", 0, 0, "" },
			{ "RH_compM2", "", 0, 0, "" },
			{ "bipod_01_F_blk", "", 0, 0, "" },
			{ "hlc_muzzle_snds_g3", "", 0, 0, "" },
      { "hlc_muzzle_556NATO_KAC", "", 0, 0, "" },
			{ "RH_compM2l", "", 0, 0, "" },
			{ "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" }


        };
        mags[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 0, 0, "" },
			{ "16Rnd_9x21_Mag", "", 0, 0, "" },
            { "RH_30Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "" },
			{ "hlc_30rnd_556x45_EPR", "", 0, 0, "" },
			{ "RH_6Rnd_454_MagRH_60Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "29rnd_300BLK_STANAG", "", 0, 0, "" },
            { "hlc_5rnd_300WM_FMJ_AWM", "", 0, 0, "" },
			{ "26_cartridge", "", 0, 0, "" },
			{ "RH_20Rnd_762x51_M80A1", "", 0, 0, "" },
			{ "RH_15Rnd_45cal_fnp", "", 0, 0, "" },
			{ "RH_16Rnd_40cal_usp", "", 0, 0, "" },
			{ "RH_20Rnd_57x28_FN", "", 0, 0, "" },
			{ "DDOPP_1Rnd_X26", "", 0, 0, "" },
			{ "hlc_20rnd_762x51_b_G3", "", 0, 0, "" },
      { "RH_60Rnd_556x45_Mk262", "", 0, 0, "license_cop_fbi" },
			{ "hlc_30rnd_556x45_EPR_G36", "", 0, 0, "" },
			{ "hlc_30rnd_556x45_EPR", "", 0, 0, "" },
			{ "RH_7Rnd_50_AE", "", 0, 0, "" }
        };
        accs[] = {
            { "RH_compM2l", "", 0, 0, "" },
            { "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
			{ "optic_Arco_blk_F", "", 0, 0, "" },
			{ "RH_qdss_nt4", "", 0, 0, "" },
			{ "RH_compM2", "", 0, 0, "" },
			{ "bipod_01_F_blk", "", 0, 0, "" },
			{ "RH_compM2l", "", 0, 0, "" },
			{ "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" }
        };
    };
	class cop_red {
        name = "COP CODE RED SHOP";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 0, -1, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" },
            { "HandGrenade_Stone", "Flashbang", 0, 0, "" },
            { "SmokeShellYellow", "Tear Gas", 0, 0, "" },
			{ "RH_M4_moe", "",0, 0, "" },
			{ "hlc_rifle_CQBR", "",0, 0, "" },
			{ "RH_Hk416s", "",0, 0, "" },
			{ "hlc_rifle_samr2", "",0, 0, "" },
			{ "RH_Mk11", "",0, 0, "" },
      { "hlc_rifle_awmagnum", "",0, 0, "call life_coplevel >= 5" },
            { "DDOPP_X26", "", 0, 0, "" },
            { "RH_compM2l", "", 0, 0, "" },
            { "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
			{ "optic_Arco_blk_F", "", 0, 0, "" },
			{ "RH_qdss_nt4", "", 0, 0, "" },
			{ "RH_m110sd", "", 0, 0, "" },
			{ "optic_AMS", "", 0, 0, "" },
			{ "RH_compM2", "", 0, 0, "" },
			{ "bipod_01_F_blk", "", 0, 0, "" },
			{ "RH_compM2l", "", 0, 0, "" },
			{ "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" }


        };
        mags[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 0, 0, "" },
			{ "16Rnd_9x21_Mag", "", 0, 0, "" },
            { "RH_30Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "" },
			{ "hlc_30rnd_556x45_EPR", "", 0, 0, "" },
			{ "RH_6Rnd_454_MagRH_60Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "29rnd_300BLK_STANAG", "", 0, 0, "" },
            { "hlc_5rnd_300WM_FMJ_AWM", "", 0, 0, "" },
			{ "26_cartridge", "", 0, 0, "" },
			{ "RH_20Rnd_762x51_M80A1", "", 0, 0, "" },
			{ "RH_15Rnd_45cal_fnp", "", 0, 0, "" },
			{ "RH_16Rnd_40cal_usp", "", 0, 0, "" },
			{ "RH_20Rnd_57x28_FN", "", 0, 0, "" },
			{ "DDOPP_1Rnd_X26", "", 0, 0, "" },
			{ "RH_7Rnd_50_AE", "", 0, 0, "" }
        };
        accs[] = {
            { "RH_compM2l", "", 0, 0, "" },
            { "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
			{ "optic_Arco_blk_F", "", 0, 0, "" },
			{ "RH_qdss_nt4", "", 0, 0, "" },
			{ "RH_compM2", "", 0, 0, "" },
			{ "bipod_01_F_blk", "", 0, 0, "" },
			{ "RH_compM2l", "", 0, 0, "" },
			{ "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" }
        };
    };
    class cop_adv {
        name = "SERT Cop Shop";
        side = "cop";
        conditions = "license_cop_sert";
        items[] = {
            { "Binocular", "", 0, -1, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
            { "HandGrenade_Stone", "Flashbang", 0, 0, "" },
            { "SmokeShellYellow", "Tear Gas", 0, 0, "call life_coplevel >= 6" },
			{ "hgun_P07_snds_F", "Stun Pistol", 0, 0, "" },
            { "hlc_smg_MP5N", "", 0, 0, "call life_coplevel >= 1" },
            { "RH_m4", "", 0, 0, "call life_coplevel >= 2" },
            { "RH_g17", "", 0, 0, "call life_coplevel >= 2" },
			{ "RH_M4A1_ris  ", "", 0, 0, "call life_coplevel >= 1" },
            { "RH_M27IAR", "", 0, 0, "call life_coplevel >= 2" },
			{ "hlc_rifle_M4", "", 0, 0, "license_cop_sert" },
			{ "hlc_rifle_bcmjack", "", 0, 0, "license_cop_sert" },
			{ "BP_R700", "", 0, 0, "license_cop_sert" },
			{ "hlc_rifle_bcmjack", "", 0, 0, "license_cop_sert" }


        };
        mags[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 0, 0, "" },
			{ "16Rnd_9x21_Mag", "", 0, 0, "" },
            { "RH_30Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "" },
			{ "hlc_30rnd_556x45_EPR", "", 0, 0, "" },
			{ "RH_6Rnd_454_MagRH_60Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "29rnd_300BLK_STANAG", "", 0, 0, "" },
            { "hlc_5rnd_300WM_FMJ_AWM", "", 0, 0, "" },
			{ "26_cartridge", "", 0, 0, "" },
			{ "RH_7Rnd_50_AE", "", 0, 0, "" }
        };
        accs[] = {
            { "FHQ_optic_AC11704", "", 0, 0, "" },
            { "RH_compM2l", "", 0, 0, "call life_coplevel >= 2" },
            { "RH_SFM952V", "", 0, 0, "call life_coplevel >= 2" },
			{ "RH_M6X", "", 0, 0, "call life_coplevel >= 2" },
			{ "FHQ_optic_ACOG", "", 0, 0, "call life_coplevel >= 5" },
			{ "FHQ_optic_ACO", "", 0, 0, "license_cop_sert" },
			{ "BP_M3AMrad", "", 0, 0, "license_cop_sert" },
			{ "optic_Arco_blk_F", "", 0, 0, "" },
			{ "FHQ_optic_AC11704", "", 0, 0, "" },
			{ "RH_compM2l", "", 0, 0, "" },
			{ "RH_SFM952V", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
			{ "FHQ_optic_ACO", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 0, 0, "" },
            { "Binocular", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
