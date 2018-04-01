/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "A3L_Farmer_Outfit", "Farmer", 150, "" },
            { "A3L_CivShirtFormal2", "Shirt 1", 175, "" },
            { "A3L_CivShirtFormal", "Shirt 2", 250, "" },
            { "A3L_CivShirtKappa", "Kappa Shirt", 250, "" },
            { "A3L_CivShirtMoonMan", "Moon Man", 275, "" },
            { "A3L_CivShirtOink", "Oink Shirt", 350, "" },
            { "A3L_Priest_Uniform", "Priest", 650, "" },
            { "A3L_CivShirtPrincess", "Princess", 735, "" },
            { "A3L_Suit_Uniform", "Suit", 1100, "" },
            { "A3L_Worker_Outfit", "Worker", 1200, "" },
            { "RastaCiv", "Pot Head", 1500, "" },
            { "TRYK_shirts_DENIM_RED2", "Check Shirt", 2500, "" },
            { "TRYK_U_taki_COY", "Casual Wears", 5000, "" }
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "TRYK_Kio_Balaclava", "Balaclava", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			  { "V_Press_F", "", 500, "" }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "A3L_EC_SOCDT", "Cadet Uniform", 0, "call life_coplevel == 1" },
			{ "A3L_EC_SOOFC", "Deputy Uniform", 0, "call life_coplevel == 2" },
			{ "A3L_EC_SOCPL", "Corporal Uniform", 0, "call life_coplevel == 3" },
			{ "A3L_EC_SOSGT", "Sergeant Uniform", 0, "call life_coplevel == 4" },
			{ "A3L_EC_SOLT", "Lieutenant Uniform", 0, "call life_coplevel == 5" },
			{ "A3L_EC_SOCPT", "Captain Uniform", 0, "call life_coplevel == 6" },
			{ "A3L_EC_SODS", "Chief Deputy Sheriff Uniform", 0, "call life_coplevel == 7" },
			{ "A3L_EC_SOSHERIFF", "Sheriff Uniform", 0, "call life_coplevel == 8" },
			{ "A3L_SERT_Tac_OD", "SERT Operation Uniform", 0, "license_cop_sert" },
			{ "A3L_SERT_Patrol", "SERT Patrol Uniform", 0, "license_cop_sert" },
			{ "A3L_ECSO_Patrol_Jacket", "SERT Patrol Uniform", 0, "license_cop_sert" },
      { "A3L_FBI_Tac_BLK", "FBI Patrol Uniform", 0, "license_cop_fbi" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
			{ "M_sheriffhat", "Campaign Hat", 0, "" },
			{ "H_Cap_blk", "", 0, "" },
            { "TRYK_H_PASGT_BLK", "", 0, "license_cop_sert" },
            { "HG_FBI_Cap_2_F", "FBI Hat", 0, "license_cop_fbi" },
            { "H_PASGT_basic_black_F", "", 0, "license_cop_sert" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Shades_Black", "", 0, "" },
            { "G_Lowprofile", "", 0, "" },
            { "G_Combat", "", 0, "" },
            { "G_Aviator", "", 0, "" },
			{ "G_Balaclava_combat", "", 0, "" },
            { "G_Lady_Mirror", "", 0, "" },
            { "G_Lady_Dark", "", 0, "" },
            { "G_Lady_Blue", "", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "A3L_EC_PATROL_VEST", "", 0, "" },
			{ "A3L_EC_HWP_VEST", "", 0, "" },
			{ "HG_Police_Black_Vest", "", 0, "" },
			{ "A3L_ftovest2", "FTO Vest", 0, "call life_coplevel >= 4" },
			{ "TRYK_V_tacv1LC_SRF_OD", "", 0, "call life_coplevel >= 4" },
            { "SERT_FULL_VEST", "Sheriff SERT - Normal Armour", 0, "license_cop_sert" },
			{ "S_VHO_OV_BLK_2", "Sheriff SERT - Light Patrol", 0, "license_cop_sert" },
			{ "A3L_EC_SERT_SPOPS_NP", "Sheriff SERT Opps", 0, "license_cop_sert" },
      { "FBI_BLK_TACTICAL", "FBI Vest", 0, "license_cop_fbi" },
			{ "TRYK_V_Sheriff_BA_TB", "Sheriff SERT Opps 2", 0, "license_cop_sert" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "", 0, "" }
        };
    };
	class cop_clo_red {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "HG_HWP_Einsatzstoff", "Code Red Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
			{ "TRYK_H_PASGT_BLK", "Code Red Helmet", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_Balaclava_combat", "Gas Mask", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "HG_Sheriff_Staff_Weste", "Code Red Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "", 0, "" }
        };
    };
    class cop_adv_clo {
        title = "STR_Shops_C_Police";
        conditions = "license_cop_sert";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "A3L_SERT_Tac_OD", "", 0, "" },
            { "A3L_SERT_Patrol", "", 0, "" },
            { "U_B_Wetsuit", "Scuba Suit", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "SO_SERTWHITEBLKBK", "", 0, "" },
            { "SO_SERTWHITEBLK", "", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_B_Diving", "", 0, "" },
            { "G_Balaclava_combat", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Shades_Black", "", 0, "" },
            { "G_Lowprofile", "", 0, "" },
            { "G_Combat", "", 0, "" },
            { "G_Aviator", "", 0, "" },
            { "G_Lady_Mirror", "", 0, "" },
            { "G_Lady_Dark", "", 0, "" },
            { "G_Squares", "", 0, "" },
            { "G_Balaclava_blk", "", 0, "" },
            { "G_Balaclava_lowprofile", "", 0, "" },
            { "G_Balaclava_oli", "", 0, "" },
            { "G_Bandanna_aviator", "", 0, "" },
            { "G_Bandanna_beast", "", 0, "" },
            { "G_Bandanna_blk", "", 0, "" },
            { "G_Bandanna_khk", "", 0, "" },
            { "G_Bandanna_oli", "", 0, "" },
            { "G_Bandanna_shades", "", 0, "" },
            { "G_Bandanna_sport", "", 0, "" },
            { "G_Bandanna_tan", "", 0, "" },
            { "G_Balaclava_oli", "", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "SERT_BALLSACK_VEST", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "", 0, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "A3L_CivShirtFormal", "EMS Uniform", 0, "" },
			{ "A3L_CivShirtFormal", "Senior EMS Uniform", 0, "" },
			{ "TRYK_OVERALL_SAGE", "Flight Suit", 0, "" },
			{ "U_C_ConstructionCoverall_Black_F", "Crew Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_blu", "", 0, "" },
			{ "H_PilotHelmetHeli_O", "Flight Helmet", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Blue", "", 0, "" }
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "S_VHO_OV_BLK_2", "Ballistic vest", 0, "" },
			{ "Pro_emsftovest2", "Command Vest", 0, "" },
			{ "V_Safety_yellow_F", "HI-Vis Light Vest", 0, "" },
			{ "A3L_emsride", "Ride Along", 0, "" },
			{ "A3L_emsftovest", "backup vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
			{ "TRYK_B_Medbag", "Medic Response Bag", 0, "" },
            { "B_Messenger_IDAP_F", "First Aid Bag (IDAP)", 0, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
			{ "TRYK_U_B_ARO1_BLK_CombatUniform", "", 5000, "" },
			{ "TRYK_U_B_ARO1_CBR_CombatUniform", "", 5000, "" },
			{ "TRYK_U_B_ARO1_GR_CombatUniform", "", 5000, "" },
			{ "TRYK_DMARPAT_T", "", 5500, "" },
			{ "TRYK_U_B_AOR2_BLK_CombatUniform", "", 6000, "" },
			{ "TRYK_U_B_PCUHsW3nh", "", 6000, "" },
			{ "TRYK_U_B_PCUHsW3", "", 6000, "" },
			{ "TRYK_U_B_BLKOCP_CombatUniform", "", 6500, "" },
			{ "TRYK_U_B_BLOD_T", "", 5000, "" },
			{ "TRYK_U_B_3CD_Delta_BDU", "", 5000, "" },
			{ "TRYK_U_B_GRTAN_CombatUniform", "", 5000, "" },
			{ "TRYK_U_B_MARPAT_Wood", "", 5000, "" },
			{ "TRYK_U_B_MARPAT_WOOD_CombatUniform", "", 6000, "" },
			{ "TRYK_U_Bts_UCP_PCUs", "", 6000, "" },
			{ "TRYK_U_B_PCUGs_BLK_R", "", 6000, "" },
			{ "TRYK_U_B_PCUGs_gry_R", "", 6000, "" },
			{ "TRYK_U_hood_mc", "", 7000, "" },
			{ "TRYK_U_hood_nc", "", 7000, "" },
			{ "U_O_FullGhillie_lsh", "", 25000, "" },
			{ "U_O_FullGhillie_sard", "", 25000, "" },
			{ "U_O_FullGhillie_ard", "", 25000, "" },
			{ "U_I_FullGhillie_lsh", "", 25000, "" },
			{ "U_I_FullGhillie_sard", "", 25000, "" },
			{ "U_I_FullGhillie_ard", "", 25000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
			{ "H_ShemagOpen_tan", "", 2500, "" },
			{ "H_Shemag_olive", "", 2500, "" },
			{ "H_ShemagOpen_khk", "", 2500, "" },
			{ "TRYK_Kio_Balaclava", "Balaclava", 120, "" },
			{ "TRYK_H_Booniehat_AOR2", "", 2500, "" },
			{ "TRYK_H_Booniehat_MARPAT_WOOD", "", 2500, "" },
			{ "TRYK_H_Booniehat_JSDF", "", 2500, "" },
			{ "TRYK_H_Booniehat_AOR1", "", 2500, "" },
			{ "TRYK_Kio_Balaclava", "", 2500, "" },
			{ "TRYK_H_Bandana_wig", "", 2500, "" },
			{ "TRYK_H_Bandana_wig_g", "", 2500, "" },
			{ "H_Watchcap_blk", "", 2500, "" },
			{ "H_Watchcap_khk", "", 2500, "" },
			{ "H_Watchcap_camo", "", 2500, "" },
			{ "H_Watchcap_sgg", "", 2500, "" },
			{ "H_HelmetO_ocamo", "", 2500, "" },
			{ "H_HelmetSpecO_blk", "", 2500, "" },
			{ "H_HelmetIA", "", 2500, "" },
			{ "H_HelmetSpecO_ocamo", "", 2500, "" },
			{ "H_Shemag_khk", "", 2500, "" },
			{ "H_Shemag_olive_hs", "", 2500, "" },
			{ "H_ShemagOpen_khk", "", 2500, "" },
			{ "H_Cap_headphones", "", 2500, "" },
			{ "H_PilotHelmetFighter_B", "", 2500, "" },
			{ "H_PilotHelmetFighter_I", "", 2500, "" },
			{ "H_PilotHelmetFighter_O", "", 2500, "" },
			{ "H_MilCap_oucamo", "", 2500, "" },
			{ "H_Bandanna_camo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
            { "G_Balaclava_combat", "", 7500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "V_TacVest_khk", "", 5000, "" },
			{ "V_TacVest_blk", "", 5000, "" },
			{ "V_Chestrig_blk", "", 5000, "" },
			{ "V_BandollierB_cbr", "", 5000, "" },
			{ "V_TacVestCamo_khk", "", 5000, "" },
			{ "V_PlateCarrierL_CTRG", "", 30000, "" },
			{ "V_PlateCarrierH_CTRG", "", 35000, "" },
			{ "V_PlateCarrierGL_mtp", "", 40000, "" },
			{ "V_PlateCarrierSpec_mtp", "", 30000, "" },
			{ "V_PlateCarrierIAGL_oli", "", 35000, "" },
            { "V_HarnessOGL_brn", "Suicide Vest", 500000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};
