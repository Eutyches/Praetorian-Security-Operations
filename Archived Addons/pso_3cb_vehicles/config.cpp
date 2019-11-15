class CfgPatches
{
	class PSO_Vehicles
	{
		units[] = {"UK3CB_BAF_Merlin_PSO","UK3CB_BAF_Wildcat_PSO"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class UK3CB_BAF_Merlin_HC3_18_GPMG_DPMT;
	class UK3CB_BAF_Wildcat_AH1_CAS_8C_DPMT;
	
	class UK3CB_BAF_Merlin_PSO: UK3CB_BAF_Merlin_HC3_18_GPMG_DPMT
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Corey";
		displayName = "UK3CB BAF Merlin PSO";
		DLC = "";
		hiddenSelectionsTextures[] = {"\pso_vehicles\paa\merlin_Layer0.paa","\pso_vehicles\paa\merlin_layer2.paa"};
	};
	
	class UK3CB_BAF_Wildcat_PSO: UK3CB_BAF_Wildcat_AH1_CAS_8C_DPMT
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Corey";
		displayName = "UK3CB BAF Wildcat PSO";
		DLC = "";
		hiddenSelectionsTextures[] = {"\pso_vehicles\paa\wildcat.paa","\pso_vehicles\paa\wildcat_black2.paa"};
	};
};