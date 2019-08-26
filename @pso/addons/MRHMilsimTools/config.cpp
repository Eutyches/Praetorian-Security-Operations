class CfgPatches {
	class MRHMilsimTools{
		units[] = {"PSO_Flag"}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"cba_main"};
		version = 1.17.1;
		versionStr = "1.17.1";
		versionAr[] = {1,17,1};
		versionDesc = "MRH Milsim Tools";
		versionAct = "call compile preProcessFileLineNumbers '\MRHMilSimTools\about.sqf'";
		author = "Mr H.";
      authors[]= {"Mr H."};
		url = "https://mrhmilsimtools-arma3-mod.wikia.com/wiki/MRHMilsimTools_ARMA3_Mod_Wiki";
	};
		
		
};

class CfgMods {
    class MRHMilsimTools {
        dir = "@MRHMilsimTools";
        name = "Mister H's Milsim Tools";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "https://mrhmilsimtools-arma3-mod.wikia.com/wiki/MRHMilsimTools_ARMA3_Mod_Wiki";
        description = "Issue Tracker: https://github.com/MisterHLunaticwraith/MRHMilsimTools/issues";
    };
};

#include "\MRHMilSimTools\cfgSettings.hpp"

class Extended_PreInit_EventHandlers
{
   class MRHMilsimTools_CBA_Settings
   {
      init = "call compile preProcessFileLineNumbers '\MRHMilSimTools\Functions\SettingsPreInit\CBASettings.sqf'";
   }; 
   class MRHMilsimTools_CBA_Settings_keybinds
   {
      init = "call compile preProcessFileLineNumbers '\MRHMilSimTools\Functions\SettingsPreInit\CBAKeys.sqf'";
   };    
	   
};
class Extended_PostInit_EventHandlers
{
   class MRHMilsimTools_Core_SetPlayerIntel
   {
      clientInit = "call compile preProcessFileLineNumbers '\MRHMilSimTools\Functions\InitFunctions\fn_MilsimTools_Core_SetPlayerIntel.sqf'";
   };
   
   class MRHMilsimTools_Core_InitPlayerLocal
   {
      clientInit = "call compile preProcessFileLineNumbers '\MRHMilSimTools\Functions\InitFunctions\XEHclient.sqf'";
   };
   
   class MRHMilsimTools_Core_PlayersRegistry
   {
      serverInit = "call compile preProcessFileLineNumbers '\MRHMilSimTools\Functions\InitFunctions\XEHserver.sqf'";
   };
   
};

/////=========cfgFunctions========
class CfgFunctions
{
	#include "\MRHMilSimTools\Functions\cfgFunctions.hpp"
};
////=============fincfgFunctions
// =============CFG======================================================

/////=========cfgNotifications=====
class cfgNotifications
{
#include"\MRHMilSimTools\cfghpp\cfgnotifications.hpp"
};
////=============fincfgNotifications
//===cfgMRHRanks
#include"\MRHMilSimTools\cfghpp\cfgMRHrankpictures.hpp"
//==========

#include"\MRHMilSimTools\cfghpp\cfgMRHcompositions.hpp"
#include"\MRHMilSimTools\cfghpp\cfg3DEN.hpp"

class CfgVehicles //added by Corey -- use class PSO_Flag as template to add additional flags
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
			init = "(_this select 0) setFlagTexture ""\MRHMilsimTools\paa\psoFlag.paa""";
		};
	};
};

class CfgUnitInsignia
{
	class MRH_MedicShoulderPatch
	{
		author = "Mr H.";
		displayName = $STR_MRH_MISC_MedicPatchInsignia;
		texture = "\MRHMilSimTools\paa\medicpatch.paa";
	};
	class PSO_UnitPatch_Flag //Use this as a template for new insignia (Corey)
	{
		author = "Corey";
		displayName = "PSO Flag";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_flag.paa";
	};
	class PSO_UnitPatch_Helmet
	{
		author = "Corey";
		displayName = "PSO Helmet (Color)";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_helmet.paa";
	};
	class PSO_UnitPatch_Helmet_Black
	{
		author = "Corey";
		displayName = "PSO Helmet (Black)";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_helmet_black.paa";
	};
	class PSO_UnitPatch_Helmet_BlackonWhite
	{
		author = "Corey";
		displayName = "PSO Helmet (Black on White)";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_helmet_blackonwhite.paa";
	};
	class PSO_UnitPatch_Helmet_White
	{
		author = "Corey";
		displayName = "PSO Helmet (White)";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_helmet_white.paa";
	};
	class PSO_UnitPatch_Helmet_WhiteonBlack
	{
		author = "Corey";
		displayName = "PSO Helmet (White on Black)";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_helmet_whiteonblack.paa";
	};
	class PSO_UnitPatch_MinstrelDuck
	{
		author = "Corey";
		displayName = "PSO Minstrel Duck";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_minstrelduck.paa";
	};
	class PSO_UnitPatch_Patch
	{
		author = "Corey";
		displayName = "PSO Unit Patch";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_patch.paa";
	};
	class PSO_UnitPatch_Snack
	{
		author = "Corey";
		displayName = "PSO Snackbar";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_snack.paa";
	};
	class PSO_UnitPatch_Text1
	{
		author = "Corey";
		displayName = "PSO Full Text Black";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text1.paa";
	};
	class PSO_UnitPatch_Text1_1
	{
		author = "Corey";
		displayName = "PSO Full Text White";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text1_1.paa";
	};
	class PSO_UnitPatch_Text1_2
	{
		author = "Corey";
		displayName = "PSO Full Text Black on White";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text1_2.paa";
	};
	class PSO_UnitPatch_Text1_3
	{
		author = "Corey";
		displayName = "PSO Full Text White on Black";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text1_3.paa";
	};
	class PSO_UnitPatch_Text2
	{
		author = "Corey";
		displayName = "PSO Text Black";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text2.paa";
	};
	class PSO_UnitPatch_Text2_1
	{
		author = "Corey";
		displayName = "PSO Text White";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text2_1.paa";
	};
	class PSO_UnitPatch_Text3
	{
		author = "Corey";
		displayName = "PSO Text Black on White";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text3.paa";
	};
	class PSO_UnitPatch_Text4
	{
		author = "Corey";
		displayName = "PSO Text White on Black";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_text4.paa";
	};
	class PSO_UnitPatch_War
	{
		author = "Corey";
		displayName = "PSO War is Hell";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_war.paa";
	};
	class PSO_UnitPatch_War2
	{
		author = "Corey";
		displayName = "PSO War is Hell Black on White";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_war2.paa";
	};
	class PSO_UnitPatch_War3
	{
		author = "Corey";
		displayName = "PSO War is Hell White on Black";
		texture = "\MRHMilSimTools\paa\unitpatch_pso_war3.paa";
	};
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class MRH_MedicPatch_init {
            init = "_this call MRH_fnc_MilsimTools_Core_assignMedicPatch;";
        };
    };
};