class CfgPatches
{
	class PSO_Foxhound
	{
		units[] = {"rksla3_foxhound_lppv_tes_pso_black","rksla3_foxhound_lppv_tes_pso_olive","rksla3_foxhound_lppv_tes_pso_tan","rksla3_foxhound_lppv_tes_pso_white"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class rksla3_foxhound_lppv_tes;
	
	class rksla3_foxhound_lppv_tes_pso_black: rksla3_foxhound_lppv_tes
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO Black";
		DLC = "";
		hiddenSelectionsTextures[] = {"\pso_foxhound\paa\foxhound_exterior_pso_black.paa"};
	};
	
	class rksla3_foxhound_lppv_tes_pso_olive: rksla3_foxhound_lppv_tes
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO Olive Drab";
		DLC = "";
		hiddenSelectionsTextures[] = {"\pso_foxhound\paa\foxhound_exterior_pso_olive.paa"};
	};
	
	class rksla3_foxhound_lppv_tes_pso_tan: rksla3_foxhound_lppv_tes
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO Tan";
		DLC = "";
		hiddenSelectionsTextures[] = {"\pso_foxhound\paa\foxhound_exterior_pso_tan.paa"};
	};
	
	class rksla3_foxhound_lppv_tes_pso_white: rksla3_foxhound_lppv_tes
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Foxhound LPPV PSO White";
		DLC = "";
		hiddenSelectionsTextures[] = {"\pso_foxhound\paa\foxhound_exterior_pso_white.paa"};
	};
};