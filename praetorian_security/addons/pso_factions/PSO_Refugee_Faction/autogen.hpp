//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 194.145977 on Stable branch
// Generated with ALiVE version 1.11.3.1905291
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class C_Refugee {
        displayName = "Refugee";
        side = 3;
        flag = "\A3\ui_f\data\map\markers\flags\UN_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\UN_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class Civilian {

        class C_Refugee {
            name = "Refugee";

            class Infantry {
                name = "Infantry";

                class c_refugee_infantry_refugee_group {
                    name = "Refugee Group";
                    side = 3;
                    faction = "C_Refugee";
                    icon = "";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 3;
                        vehicle = "C_Refugee_Guide_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_03";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_04";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_06";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_08";
                    };
                };

                class c_refugee_infantry_armed_guided_group {
                    name = "Armed Guided Group";
                    side = 3;
                    faction = "C_Refugee";
                    icon = "";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 3;
                        vehicle = "C_Refugee_Guide_Armed_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_07";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_05";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_02";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_06";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 3;
                        vehicle = "C_Refugee_Refugee_03";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "SERGEANT";
                        side = 3;
                        vehicle = "C_Refugee_Guide_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class C_man_1;
    class C_man_1_OCimport_01 : C_man_1 { scope = 0; class EventHandlers; };
    class C_man_1_OCimport_02 : C_man_1_OCimport_01 { class EventHandlers; };

    class C_Man_Messenger_01_F;
    class C_Man_Messenger_01_F_OCimport_01 : C_Man_Messenger_01_F { scope = 0; class EventHandlers; };
    class C_Man_Messenger_01_F_OCimport_02 : C_Man_Messenger_01_F_OCimport_01 { class EventHandlers; };

    class LOP_CHR_Civ_Profiteer_04;
    class LOP_CHR_Civ_Profiteer_04_OCimport_01 : LOP_CHR_Civ_Profiteer_04 { scope = 0; class EventHandlers; };
    class LOP_CHR_Civ_Profiteer_04_OCimport_02 : LOP_CHR_Civ_Profiteer_04_OCimport_01 { class EventHandlers; };

    class LOP_AFR_Civ_Man_06;
    class LOP_AFR_Civ_Man_06_OCimport_01 : LOP_AFR_Civ_Man_06 { scope = 0; class EventHandlers; };
    class LOP_AFR_Civ_Man_06_OCimport_02 : LOP_AFR_Civ_Man_06_OCimport_01 { class EventHandlers; };

    class UK3CB_TKC_C_CIV;
    class UK3CB_TKC_C_CIV_OCimport_01 : UK3CB_TKC_C_CIV { scope = 0; class EventHandlers; };
    class UK3CB_TKC_C_CIV_OCimport_02 : UK3CB_TKC_C_CIV_OCimport_01 { class EventHandlers; };

    class LOP_CHR_Civ_Citizen_04;
    class LOP_CHR_Civ_Citizen_04_OCimport_01 : LOP_CHR_Civ_Citizen_04 { scope = 0; class EventHandlers; };
    class LOP_CHR_Civ_Citizen_04_OCimport_02 : LOP_CHR_Civ_Citizen_04_OCimport_01 { class EventHandlers; };

    class PSO_OD;
    class PSO_OD_OCimport_01 : PSO_OD { scope = 0; class EventHandlers; };
    class PSO_OD_OCimport_02 : PSO_OD_OCimport_01 { class EventHandlers; };

    class LOP_AFR_Civ_Man_03;
    class LOP_AFR_Civ_Man_03_OCimport_01 : LOP_AFR_Civ_Man_03 { scope = 0; class EventHandlers; };
    class LOP_AFR_Civ_Man_03_OCimport_02 : LOP_AFR_Civ_Man_03_OCimport_01 { class EventHandlers; };

    class LOP_CHR_Civ_Offroad;
    class LOP_CHR_Civ_Offroad_OCimport_01 : LOP_CHR_Civ_Offroad { scope = 0; class EventHandlers; class Turrets; };
    class LOP_CHR_Civ_Offroad_OCimport_02 : LOP_CHR_Civ_Offroad_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class LOP_CHR_Civ_Worker_06;
    class LOP_CHR_Civ_Worker_06_OCimport_01 : LOP_CHR_Civ_Worker_06 { scope = 0; class EventHandlers; };
    class LOP_CHR_Civ_Worker_06_OCimport_02 : LOP_CHR_Civ_Worker_06_OCimport_01 { class EventHandlers; };

    class UK3CB_Civ_LandRover_Soft_Red_A;
    class UK3CB_Civ_LandRover_Soft_Red_A_OCimport_01 : UK3CB_Civ_LandRover_Soft_Red_A { scope = 0; class EventHandlers; class Turrets; };
    class UK3CB_Civ_LandRover_Soft_Red_A_OCimport_02 : UK3CB_Civ_LandRover_Soft_Red_A_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class Passenger_Turret;
            class CargoTurret_4;
            class CargoTurret_5;
        };
    };


    class C_Refugee_Refugee_01 : C_man_1_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee1";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_CIVIL_male"};

        uniformClass = "UK3CB_CHC_C_U_CIT_01";

        linkedItems[] = {"UK3CB_H_Beanie_01","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_H_Beanie_01","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "B_Carryall_oli";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"UK3CB_CHC_C_U_CIT_01",{}},{},{"B_Carryall_oli",{{"ACE_Banana",1},{"ACE_elasticBandage",2},{"ACE_SpraypaintBlack",1},{"ACE_Can_Franta",1},{"ACE_Canteen_Half",1},{"ACE_Humanitarian_Ration",4},{"ACE_MRE_BeefStew",1},{"ACE_MRE_CreamChickenSoup",1},{"ACE_rope15",1},{"ACE_WaterBottle",1}}},"UK3CB_H_Beanie_01","",{},{"","","","","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_02 : C_Man_Messenger_01_F_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee2";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Greek","G_CIVIL_man"};

        uniformClass = "TRYK_U_denim_jersey_blu";

        linkedItems[] = {"H_Cap_blk","ItemWatch"};
        respawnlinkedItems[] = {"H_Cap_blk","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "B_Messenger_Coyote_F";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"TRYK_U_denim_jersey_blu",{}},{},{"B_Messenger_Coyote_F",{}},"H_Cap_blk","TRYK_Shemagh_mesh",{},{"","","","","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_03 : LOP_CHR_Civ_Profiteer_04_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee3";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

        uniformClass = "LOP_U_CHR_Woodlander_01";

        linkedItems[] = {"H_Cap_tan","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Cap_tan","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "UK3CB_B_Alice_Bedroll_K";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"LOP_U_CHR_Woodlander_01",{}},{},{"UK3CB_B_Alice_Bedroll_K",{{"ACE_Can_Franta",2},{"ACE_fieldDressing",2},{"ACE_Banana",2},{"ACE_Canteen_Half",1},{"ACE_Cellphone",1},{"ACE_MRE_SteakVegetables",1},{"ACE_MRE_CreamChickenSoup",1},{"ACE_MRE_BeefStew",2},{"ACE_wirecutter",1}}},"H_Cap_tan","shesh_cover_tan",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_04 : LOP_AFR_Civ_Man_06_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee4";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_African","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"H_Hat_brown","ItemWatch"};
        respawnlinkedItems[] = {"H_Hat_brown","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "UK3CB_B_Alice_K";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_3_F",{}},{},{"UK3CB_B_Alice_K",{{"ACE_WaterBottle_Half",2},{"ACE_tourniquet",1},{"ACE_MRE_SteakVegetables",1},{"ACE_MRE_LambCurry",1},{"ACE_Humanitarian_Ration",3},{"ACE_Can_RedGull",1},{"ACE_quikclot",2},{"ACE_Banana",2}}},"H_Hat_brown","",{},{"","","","","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_05 : UK3CB_TKC_C_CIV_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee5";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "UK3CB_TKC_C_U_06_C";

        linkedItems[] = {"UK3CB_TKC_H_Turban_02_1","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_TKC_H_Turban_02_1","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"UK3CB_TKC_C_U_06_C",{}},{},{"rhs_sidor",{{"ACE_Banana",3},{"ACE_Can_Spirit",1},{"ACE_Canteen_Empty",1},{"ACE_Canteen_Half",1},{"ACE_Humanitarian_Ration",7},{"ACE_rope18",1}}},"UK3CB_TKC_H_Turban_02_1","",{},{"","","","","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_06 : LOP_CHR_Civ_Citizen_04_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee6";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

        uniformClass = "LOP_U_CHR_Citizen_04";

        linkedItems[] = {"LOP_H_Villager_cap"};
        respawnlinkedItems[] = {"LOP_H_Villager_cap"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "TRYK_B_FieldPack_Wood";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"LOP_U_CHR_Citizen_04",{}},{},{"TRYK_B_FieldPack_Wood",{{"ACE_Banana",2},{"ACE_fieldDressing",2},{"ACE_Canteen_Empty",1},{"ACE_Canteen",1},{"ACE_Cellphone",1},{"ACE_Humanitarian_Ration",5},{"ACE_SpraypaintGreen",1},{"ACE_WaterBottle_Half",1}}},"LOP_H_Villager_cap","shesh_cover_tan",{},{"","","","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_07 : PSO_OD_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee7";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Asian","G_CIVIL_male"};

        uniformClass = "TRYK_U_denim_jersey_blk";

        linkedItems[] = {"H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "UK3CB_B_Alice_Bedroll_K";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"TRYK_U_denim_jersey_blk",{}},{},{"UK3CB_B_Alice_Bedroll_K",{{"ACE_fieldDressing",3},{"ACE_Can_Franta",1},{"ACE_Can_RedGull",1},{"ACE_Canteen_Half",1},{"ACE_Canteen",1},{"ACE_Cellphone",1},{"ACE_Humanitarian_Ration",5},{"ACE_rope27",1},{"ACE_wirecutter",1},{"ACE_WaterBottle",1}}},"H_Cap_brn_SPECOPS","shesh_cover_tan",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_08 : LOP_AFR_Civ_Man_03_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee8";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_African","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

        uniformClass = "TRYK_shirts_DENIM_WHB_Sleeve";

        linkedItems[] = {"UK3CB_BAF_H_Wool_Hat","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_BAF_H_Wool_Hat","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "B_TacticalPack_oli";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"TRYK_shirts_DENIM_WHB_Sleeve",{}},{},{"B_TacticalPack_oli",{{"ACE_Can_Spirit",1},{"ACE_Canteen",1},{"ACE_Cellphone",1},{"ACE_Humanitarian_Ration",5},{"ACE_MRE_SteakVegetables",1},{"ACE_MRE_LambCurry",1},{"ACE_WaterBottle_Half",1}}},"UK3CB_BAF_H_Wool_Hat","TRYK_Shemagh_shade_G",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Refugee_Car_01 : LOP_CHR_Civ_Offroad_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Refugee Car1";
        side = 3;
        faction = "C_Refugee";
        crew = "C_Refugee_Refugee_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "C_Refugee_Refugee_02"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "C_Refugee_Refugee_03"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "C_Refugee_Refugee_05"; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_vehicles\data\camo\offroad\offroad_Green_co.paa'];_unit setObjectTextureGlobal [1,'po_vehicles\data\camo\offroad\offroad_Green_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "LOP_Green";

    };

    class C_Refugee_Guide_Armed_01 : LOP_CHR_Civ_Worker_06_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guide Armed";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

        uniformClass = "LOP_U_CHR_Woodlander_03";

        linkedItems[] = {"UK3CB_V_Pouch","UK3CB_ANA_B_H_Patrolcap_wdl","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_V_Pouch","UK3CB_ANA_B_H_Patrolcap_wdl","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"sgun_HunterShotgun_01_F","Binocular"};
        respawnWeapons[] = {"sgun_HunterShotgun_01_F","Binocular"};

        magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
        respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};

        backpack = "VSM_M81_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"sgun_HunterShotgun_01_F","","","",{"2Rnd_12Gauge_Pellets",2},{},""},{},{},{"LOP_U_CHR_Woodlander_03",{{"2Rnd_12Gauge_Pellets",3,2}}},{"UK3CB_V_Pouch",{{"2Rnd_12Gauge_Pellets",15,2}}},{"VSM_M81_Backpack_Kitbag",{{"ACE_fieldDressing",5},{"ACE_Banana",2},{"ACE_SpraypaintBlue",1},{"ACE_Can_Spirit",2},{"ACE_Canteen",2},{"ACE_Cellphone",1},{"ACE_Humanitarian_Ration",5},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_microDAGR",1},{"ACE_packingBandage",5},{"ACE_rope36",1},{"ACE_wirecutter",1},{"ACE_WaterBottle",2},{"ACE_morphine",2},{"ACE_epinephrine",2},{"ACE_EntrenchingTool",1}}},"UK3CB_ANA_B_H_Patrolcap_wdl","shesh_cover_tan",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Guide_01 : C_Refugee_Guide_Armed_01 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guide";
        side = 3;
        faction = "C_Refugee";

        identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

        uniformClass = "TRYK_U_denim_hood_mc";

        linkedItems[] = {"rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Binocular"};
        respawnWeapons[] = {"Binocular"};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "VSM_OGA_OD_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"TRYK_U_denim_hood_mc",{}},{},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_fieldDressing",5},{"ACE_Banana",2},{"ACE_SpraypaintBlue",1},{"ACE_Can_Spirit",2},{"ACE_Canteen",2},{"ACE_Cellphone",1},{"ACE_Humanitarian_Ration",5},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_microDAGR",1},{"ACE_packingBandage",5},{"ACE_rope36",1},{"ACE_wirecutter",1},{"ACE_WaterBottle",2},{"ACE_morphine",2},{"ACE_epinephrine",2},{"ACE_EntrenchingTool",1}}},"rhs_beanie_green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class C_Refugee_Guide_Car_01 : UK3CB_Civ_LandRover_Soft_Red_A_OCimport_02 {
        author = "Pants";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guide Car";
        side = 3;
        faction = "C_Refugee";
        crew = "C_Refugee_Guide_01";

        class Turrets : Turrets {
            class Passenger_Turret : Passenger_Turret { gunnerType = "C_Refugee_Refugee_07"; };
            class CargoTurret_4 : CargoTurret_4 { gunnerType = "C_Refugee_Refugee_06"; };
            class CargoTurret_5 : CargoTurret_5 { gunnerType = "C_Refugee_Refugee_03"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};