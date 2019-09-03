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
	
/*	class pso_p07_black : hgun_P07_F {
		displayname = "P07 9mm PSO Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_black.paa"};
		baseweapon = pso_p07_black;
	};
	
	class pso_p07_olive : hgun_P07_F {
		displayname = "P07 9mm PSO Olive";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_olive.paa"};
		baseweapon = pso_p07_olive;
	}; */
	
	class pso_p07_grey : hgun_P07_F {
		displayname = "P07 9mm PSO Grey";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07_grey.paa"};
		baseweapon = pso_p07_grey;
	};
};
