class CfgPatches
{
	class pso_foxhound
	{
		units[] = {"rksla3_foxhound_lppv_base_pso_black","rksla3_foxhound_lppv_base_pso_olive","rksla3_foxhound_lppv_base_pso_tan","rksla3_foxhound_lppv_base_pso_white"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rksla3_foxhound_lppv"};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class rksla3_foxhound_lppv_base;
	
	class rksla3_foxhound_lppv_base_pso_black: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO Black";
		DLC = "";
		hiddenSelections[] = {"main_texture","interior_texture","Plate_2","Plate_3","Plate_4"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_black_co.paa","pso_foxhound\paa\foxhound_interior_co.paa","pso_foxhound\paa\2_co.paa","pso_foxhound\paa\3_co.paa","pso_foxhound\paa\4_co.paa"};
	};
	
	class rksla3_foxhound_lppv_base_pso_olive: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO Olive Drab";
		DLC = "";
		hiddenSelections[] = {"main_texture"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_olive_co.paa"};
	};
	
	class rksla3_foxhound_lppv_base_pso_tan: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO Tan";
		DLC = "";
		hiddenSelections[] = {"main_texture"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_tan_co.paa"};
	};
	
	class rksla3_foxhound_lppv_base_pso_white: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO White";
		DLC = "";
		hiddenSelections[] = {"main_texture","interior_texture","Plate_2","Plate_3","Plate_4"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_white_co.paa","pso_foxhound\paa\foxhound_interior_co.paa","pso_foxhound\paa\2_co.paa","pso_foxhound\paa\3_co.paa","pso_foxhound\paa\4_co.paa"};
	};
};