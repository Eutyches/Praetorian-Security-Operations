//Config adapted from LM Handguns by Corey. All texturing done from scratch by Corey.

class CfgPatches {
	class pso_weapons {
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons {
	class ItemCore;
	//class hgun_ACP2_F;
	class hgun_P07_F;
	
	class pso_p07_m81 : hgun_P07_F {
		displayname = "P07 9mm PSO M81";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_m81.paa"};
		baseweapon = pso_p07_m81;
	};
	
	class pso_p07_multicam : hgun_P07_F {
		displayname = "P07 9mm PSO Multicam";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_multicam.paa"};
		baseweapon = pso_p07_multicam;
	};
	
	class pso_p07_grey : hgun_P07_F {
		displayname = "P07 9mm PSO Grey";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_grey.paa"};
		baseweapon = pso_p07_grey;
	};
	
	class pso_p07_scratched : hgun_P07_F {
		displayname = "P07 9mm PSO Scratched";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_scratched.paa"};
		baseweapon = pso_p07_scratched;
	};

	class rhs_weap_m249_pip_S;
	class RHS_M249_Snack: rhs_weap_m249_pip_S
	{
		author = "FlankenLabs/ModifiedbyCorey";
		displayName = "M249 Snack Edition";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m249_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"pso_weapons\data\m249_camo\reciever_249_co.paa",
			"pso_weapons\data\m249_camo\m249_merged1_co.paa",
			"pso_weapons\data\m249_camo\barrelstock_merged_co.paa",
			"pso_weapons\data\m249_camo\ammobox_merged_co.paa",
			"pso_weapons\data\m249_camo\Stock_co.paa"
		};
		baseWeapon="RHS_M249_Snack"
		rhs_grip1_change="RHS_M249_Snack_vfg1";
		rhs_grip2_change="RHS_M249_Snack_vfg2";
		rhs_grip3_change="RHS_M249_Snack_vfg3";
	};
	class RHS_M249_Snack_vfg1: RHS_M249_Snack
	{
		author="FlankenLabs/ModifiedbyCorey";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
	};
	class RHS_M249_Snack_vfg2: RHS_M249_Snack
	{
		author="FlankenLabs/ModifiedbyCorey";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
	};
	class RHS_M249_Snack_vfg3: RHS_M249_Snack
	{
		author="FlankenLabs";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
	};	
};
