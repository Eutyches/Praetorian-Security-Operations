/*
Inherited Class Information
CUP_AirVehicles_UH60 /// required addon (from CUP Vehicles)
CUP_B_UH60M_Unarmed_US /// Black Hawk
CUP_B_UH60M_US /// Black Hawk + Turrets
Inherited Texture Information
hiddenSelections[] = {"camo1","camo2","camo3"};
hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"}; 
*/

class CfgPatches
{
	class pso_cup_uh60
	{
		units[] = {"CUP_B_UH60M_Unarmed_US_Black_PSO"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_AirVehicles_UH60"};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class CUP_B_UH60M_Unarmed_US;
	class CUP_B_UH60M_US;
	
	class CUP_B_UH60M_Unarmed_US_Black_PSO: CUP_B_UH60M_Unarmed_US;
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "CUP / Retextured by Corey";
		displayName = "UH60M Transport Black PSO";
		DLC = "";
		hiddenSelectionsTextures[] = {"pso_cup_uh60\data\uh60m_fuselage_black_pso_co.paa","pso_cup_uh60\data\uh60m_engine_co.paa","pso_cup_uh60\data\default_co.paa"};
	};
	
};