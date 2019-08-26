class CfgPatches {

	class CR_ShirtMod {

		units[] = {};

		weapons[] = {};

		requiredVersion = 0.1;

		requiredAddons[] = {"A3_Characters_F_Civil"};

		author= "Corey";

		name = "PSO Shirt Pack";

	};

};




class CfgVehicles {


	class C_man_p_fugitive_F;

	class PSO_Black : C_man_p_fugitive_F {


		_generalMacro = "B_Soldier_F"; //unsure what this does

		displayName = "PSO Black T-Shirt";

		nakedUniform = "U_BasicBody"; //class for "naked" body

		uniformClass = "PSO_Black"; //e.g. "Example_Soldier_F"

		hiddenSelections[] = {"Camo"};

		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_black_fronthelmetlogo.paa"};

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";

	};
	

	class C_man_p_fugitive_F_afro;

	class PSO_Blackout : C_man_p_fugitive_F_afro {


		_generalMacro = "B_Soldier_F"; //unsure what this does

		displayName = "PSO Blackout";

		nakedUniform = "U_BasicBody"; //class for "naked" body

		uniformClass = "PSO_Blackout"; //e.g. "Example_Soldier_F"

		hiddenSelections[] = {"Camo"};

		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_black_fronthelmetlogo2.paa"};

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";

	};
	
	
	class C_man_p_fugitive_F_euro;

	class PSO_M81 : C_man_p_fugitive_F_euro {


		_generalMacro = "B_Soldier_F"; //unsure what this does

		displayName = "PSO M81 Woodland";

		nakedUniform = "U_BasicBody"; //class for "naked" body

		uniformClass = "PSO_M81"; //e.g. "Example_Soldier_F"

		hiddenSelections[] = {"Camo"};

		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_m81_fronthelmetlogo.paa"};

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";

	};
	

	class C_man_p_fugitive_F_asia;

	class PSO_OD : C_man_p_fugitive_F_asia {


		_generalMacro = "B_Soldier_F"; //unsure what this does

		displayName = "PSO Olive Drab";

		nakedUniform = "U_BasicBody"; //class for "naked" body

		uniformClass = "PSO_OD"; //e.g. "Example_Soldier_F"

		hiddenSelections[] = {"Camo"};

		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_olivedrab_fronthelmetlogo.paa"};

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";

	};
	

	class C_man_p_beggar_F;

	class PSO_Snack : C_man_p_beggar_F {


		_generalMacro = "B_Soldier_F"; //unsure what this does

		displayName = "PSO Snackbar";

		nakedUniform = "U_BasicBody"; //class for "naked" body

		uniformClass = "PSO_Snack"; //e.g. "Example_Soldier_F"

		hiddenSelections[] = {"Camo"};

		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_snackface.paa"};

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";

	};
	
	
	class C_man_p_beggar_F_afro;

	class PSO_Trainer : C_man_p_beggar_F_afro {


		_generalMacro = "B_Soldier_F"; //unsure what this does

		displayName = "PSO Trainer";

		nakedUniform = "U_BasicBody"; //class for "naked" body

		uniformClass = "PSO_Trainer"; //e.g. "Example_Soldier_F"

		hiddenSelections[] = {"Camo"};

		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_trainer.paa"};

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";

	};
	
};


//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------





class cfgWeapons {

	class Uniform_Base;

	class UniformItem;

	
	class PSO_Black : Uniform_Base {

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "PSO Black T-Shirt";

		picture = "\CR_ShirtTextures\Data\pso_black_fronthelmetlogo";

		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F";
		
		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_black_fronthelmetlogo.paa"}; //This must be added for all entries in both cfgVehicles and cfgWeapons. - Corey (Hotfix)



		class ItemInfo : UniformItem {

			uniformModel = "-";

			uniformClass = "PSO_Black"; //would be same as our made soldier class

			containerClass = "Supply40"; //how much it can carry

			mass = 40; //how much it weights


		};

	};	
		
	
	class PSO_Blackout : Uniform_Base {

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "PSO Blackout";

		picture = "\CR_ShirtTextures\Data\pso_black_fronthelmetlogo2";

		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F";
		
		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_black_fronthelmetlogo2.paa"};



		class ItemInfo : UniformItem {

			uniformModel = "-";

			uniformClass = "PSO_Blackout"; //would be same as our made soldier class

			containerClass = "Supply40"; //how much it can carry

			mass = 40; //how much it weights


		};

	};	
	
	
	class PSO_M81 : Uniform_Base {

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "PSO M81 Woodland";

		picture = "\CR_ShirtTextures\Data\pso_m81_fronthelmetlogo";

		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F";
		
		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_m81_fronthelmetlogo.paa"};



		class ItemInfo : UniformItem {

			uniformModel = "-";

			uniformClass = "PSO_M81"; //would be same as our made soldier class

			containerClass = "Supply40"; //how much it can carry

			mass = 40; //how much it weights


		};

	};	
	
	
	class PSO_OD : Uniform_Base {

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "PSO Olive Drab";

		picture = "\CR_ShirtTextures\Data\pso_olivedrab_fronthelmetlogo";

		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F";
		
		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_olivedrab_fronthelmetlogo.paa"};



		class ItemInfo : UniformItem {

			uniformModel = "-";

			uniformClass = "PSO_OD"; //would be same as our made soldier class

			containerClass = "Supply40"; //how much it can carry

			mass = 40; //how much it weights


		};

	};
	
	
	class PSO_Snack : Uniform_Base {

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "PSO Snackbar";

		picture = "\CR_ShirtTextures\Data\pso_snackface";

		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F";
		
		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_snackface.paa"};



		class ItemInfo : UniformItem {

			uniformModel = "-";

			uniformClass = "PSO_Snack"; //would be same as our made soldier class

			containerClass = "Supply40"; //how much it can carry

			mass = 40; //how much it weights


		};

	};


	class PSO_Trainer : Uniform_Base {

		author= "Corey";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "PSO Trainer";

		picture = "\CR_ShirtTextures\Data\pso_trainer";

		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F";
		
		hiddenSelectionsTextures[] = {"\CR_ShirtTextures\Data\pso_trainer.paa"};



		class ItemInfo : UniformItem {

			uniformModel = "-";

			uniformClass = "PSO_Trainer"; //would be same as our made soldier class

			containerClass = "Supply40"; //how much it can carry

			mass = 40; //how much it weights


		};

	};	
	

	
};