class CfgPatches {
	class PSOMilsimTools{
		units[] = {"PSO_Flag"}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"cba_main"};
		version = 1.17.1;
		versionStr = "1.17.3";
		versionAr[] = {1,17,3};
		versionDesc = "PSO Milsim Tools";
		authors[] = {"Corey"};
	};
};

class CfgVehicles  // Use class PSO_Flag as template to add additional flags (Corey)
{	
	class Flagpole_F;
	
	class PSO_Flag: FlagPole_F 
	{
		scope = 2;
		accuracy = 10000;
		displayName = "PSO Flag";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\pso_milsimtools\paa\psoFlag.paa""";
		};
	};
};

class CfgUnitInsignia
{
	class PSO_UnitPatch_Flag // Use this as a template for new insignia (Corey)
	{
		author = "Corey";
		displayName = "PSO Flag";
		texture = "\pso_milsimtools\paa\unitpatch_pso_flag.paa";
	};
	class PSO_UnitPatch_Helmet
	{
		author = "Corey";
		displayName = "PSO Helmet (Color)";
		texture = "\pso_milsimtools\paa\unitpatch_pso_helmet.paa";
	};
	class PSO_UnitPatch_Helmet_Black
	{
		author = "Corey";
		displayName = "PSO Helmet (Black)";
		texture = "\pso_milsimtools\paa\unitpatch_pso_helmet_black.paa";
	};
	class PSO_UnitPatch_Helmet_BlackonWhite
	{
		author = "Corey";
		displayName = "PSO Helmet (Black on White)";
		texture = "\pso_milsimtools\paa\unitpatch_pso_helmet_blackonwhite.paa";
	};
	class PSO_UnitPatch_Helmet_White
	{
		author = "Corey";
		displayName = "PSO Helmet (White)";
		texture = "\pso_milsimtools\paa\unitpatch_pso_helmet_white.paa";
	};
	class PSO_UnitPatch_Helmet_WhiteonBlack
	{
		author = "Corey";
		displayName = "PSO Helmet (White on Black)";
		texture = "\pso_milsimtools\paa\unitpatch_pso_helmet_whiteonblack.paa";
	};
	class PSO_UnitPatch_MinstrelDuck
	{
		author = "Corey";
		displayName = "PSO Minstrel Duck";
		texture = "\pso_milsimtools\paa\unitpatch_pso_minstrelduck.paa";
	};
	class PSO_UnitPatch_Patch
	{
		author = "Corey";
		displayName = "PSO Unit Patch";
		texture = "\pso_milsimtools\paa\unitpatch_pso_patch.paa";
	};
	class PSO_UnitPatch_Snack
	{
		author = "Corey";
		displayName = "PSO Snackbar";
		texture = "\pso_milsimtools\paa\unitpatch_pso_snack.paa";
	};
	class PSO_UnitPatch_Text1
	{
		author = "Corey";
		displayName = "PSO Full Text Black";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text1.paa";
	};
	class PSO_UnitPatch_Text1_1
	{
		author = "Corey";
		displayName = "PSO Full Text White";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text1_1.paa";
	};
	class PSO_UnitPatch_Text1_2
	{
		author = "Corey";
		displayName = "PSO Full Text Black on White";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text1_2.paa";
	};
	class PSO_UnitPatch_Text1_3
	{
		author = "Corey";
		displayName = "PSO Full Text White on Black";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text1_3.paa";
	};
	class PSO_UnitPatch_Text2
	{
		author = "Corey";
		displayName = "PSO Text Black";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text2.paa";
	};
	class PSO_UnitPatch_Text2_1
	{
		author = "Corey";
		displayName = "PSO Text White";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text2_1.paa";
	};
	class PSO_UnitPatch_Text3
	{
		author = "Corey";
		displayName = "PSO Text Black on White";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text3.paa";
	};
	class PSO_UnitPatch_Text4
	{
		author = "Corey";
		displayName = "PSO Text White on Black";
		texture = "\pso_milsimtools\paa\unitpatch_pso_text4.paa";
	};
	class PSO_UnitPatch_War
	{
		author = "Corey";
		displayName = "PSO War is Hell";
		texture = "\pso_milsimtools\paa\unitpatch_pso_war.paa";
	};
	class PSO_UnitPatch_War2
	{
		author = "Corey";
		displayName = "PSO War is Hell Black on White";
		texture = "\pso_milsimtools\paa\unitpatch_pso_war2.paa";
	};
	class PSO_UnitPatch_War3
	{
		author = "Corey";
		displayName = "PSO War is Hell White on Black";
		texture = "\pso_milsimtools\paa\unitpatch_pso_war3.paa";
	};
	class PSO_TexturedPatch_OD
	{
		author = "Corey"
		displayName = "PSO Textured Text OD"
		texture = "\pso_milsimtools\paa\psoPatch.paa";
	};
	class PSO_TexturedPatch_Coyote
	{
		author = "Corey"
		displayName = "PSO Textured Text Coyote"
		texture = "\pso_milsimtools\paa\psoPatch_coyote.paa";
	};
	class PSO_TexturedPatch_Grey
	{
		author = "Corey"
		displayName = "PSO Textured Text Grey"
		texture = "\pso_milsimtools\paa\psoPatch_greyscale.paa";
	};
	class PSO_TexturedHelmet_OD
	{
		author = "Corey"
		displayName = "PSO Textured Helmet OD"
		texture = "\pso_milsimtools\paa\psoPatch1.paa";
	};
	class PSO_TexturedHelmet_Coyote
	{
		author = "Corey"
		displayName = "PSO Textured Helmet Coyote"
		texture = "\pso_milsimtools\paa\psoPatch1_coyote.paa";
	};
	class PSO_TexturedHelmet_Grey
	{
		author = "Corey"
		displayName = "PSO Textured Helmet Grey"
		texture = "\pso_milsimtools\paa\psoPatch1_greyscale.paa";
	};
};

class cfgMarkers {

	class PSO_Flag
	{
	name = "PSO_Flag";
	icon = "\pso_milsimtools\paa\marker_psoflag.paa";
	color[] = {1, 1, 1, 1};
	size = 64;
	shadow = 1;
	scope = 2;
	};

	class PSO_Insignia
	{
	name = "PSO_Insignia";
	icon = "\pso_milsimtools\paa\marker_psoinsignia.paa";
	color[] = {1, 1, 1, 1};
	size = 64;
	shadow = 1;
	scope = 2;
	};

	class PSO_Snack
	{
	name = "PSO_Snack";
	icon = "\pso_milsimtools\paa\marker_snackface.paa";
	color[] = {1, 1, 1, 1};
	size = 64;
	shadow = 1;
	scope = 2;
	};

	class PSO_Archer
	{
	name = "PSO_Archer";
	icon = "\pso_milsimtools\paa\marker_archer.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_Bandit
	{
	name = "PSO_Bandit";
	icon = "\pso_milsimtools\paa\marker_bandit.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_Condor
	{
	name = "PSO_Condor";
	icon = "\pso_milsimtools\paa\marker_condor.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_Dagger
	{
	name = "PSO_Dagger";
	icon = "\pso_milsimtools\paa\marker_dagger.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_Excalibur
	{
	name = "PSO_Excalibur";
	icon = "\pso_milsimtools\paa\marker_excalibur.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_Flintlock
	{
	name = "PSO_Flintlock";
	icon = "\pso_milsimtools\paa\marker_flintlock.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_OverLord
	{
	name = "PSO_OverLord";
	icon = "\pso_milsimtools\paa\marker_overlord.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};

	class PSO_Witchcraft
	{
	name = "PSO_Witchcraft";
	icon = "\pso_milsimtools\paa\marker_witchcraft.paa";
	color[] = {1, 1, 1, 1};
	size = 32;
	shadow = 1;
	scope = 2;
	};
};