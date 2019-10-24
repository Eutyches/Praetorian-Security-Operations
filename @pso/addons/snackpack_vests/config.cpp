#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class snackpack_vests_cfg
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class cfgVehicles
{
	class ReammoBox;
	class snackpack_Bag_Base: ReammoBox
	{
		scope=1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		displayName="snackpack Bag";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		class DestructionEffects
		{
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"
		};
		maximumLoad=0;
		side=3;
	};
};
class cfgWeapons
{
	class ItemCore;
	class VestItem;
		class snackpack_v_marciras_grenadier_mc_pso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (MC)";
		picture="\snackpack_vests\ui\icon_v_marciras_mc_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_mc_co.paa",
			"snackpack_vests\textures\v_gear_01_mc_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_mc_pso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (MC)";
		picture="\snackpack_vests\ui\icon_v_marciras_mc_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_mc_co.paa",
			"snackpack_vests\textures\v_battle_belt_mc_co.paa",
			"snackpack_vests\textures\v_gear_01_mc_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_mc_pso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (MC)";
		picture="\snackpack_vests\ui\icon_v_marciras_MC_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_mc_co.paa",
			"snackpack_vests\textures\v_gear_01_mc_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_mcpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (MC)";
		picture="\snackpack_vests\ui\icon_v_marciras_mc_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_mc_co.paa",
			"snackpack_vests\textures\v_battle_belt_mc_co.paa",
			"snackpack_vests\textures\v_gear_01_mc_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_mcpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (MC)";
		picture="\snackpack_vests\ui\icon_v_marciras_MC_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_mc_co.paa",
			"snackpack_vests\textures\v_gear_01_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_rgrpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (RGR)";
		picture="\snackpack_vests\ui\icon_v_marciras_rgr_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_rgr_co.paa",
			"snackpack_vests\textures\v_gear_01_rgr_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_rgrpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (RGR)";
		picture="\snackpack_vests\ui\icon_v_marciras_rgr_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_rgr_co.paa",
			"snackpack_vests\textures\v_battle_belt_rgr_co.paa",
			"snackpack_vests\textures\v_gear_01_rgr_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_rgrpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (RGR)";
		picture="\snackpack_vests\ui\icon_v_marciras_rgr_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_rgr_co.paa",
			"snackpack_vests\textures\v_gear_01_rgr_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_rgrpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (RGR)";
		picture="\snackpack_vests\ui\icon_v_marciras_rgr_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_rgr_co.paa",
			"snackpack_vests\textures\v_battle_belt_rgr_co.paa",
			"snackpack_vests\textures\v_gear_01_rgr_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_rgrpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (RGR)";
		picture="\snackpack_vests\ui\icon_v_marciras_rgr_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_rgr_co.paa",
			"snackpack_vests\textures\v_gear_01_rgr_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_cbpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (CB)";
		picture="\snackpack_vests\ui\icon_v_marciras_cb_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_cb_co.paa",
			"snackpack_vests\textures\v_gear_01_cb_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_cbpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (CB)";
		picture="\snackpack_vests\ui\icon_v_marciras_cb_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_cb_co.paa",
			"snackpack_vests\textures\v_battle_belt_cb_co.paa",
			"snackpack_vests\textures\v_gear_01_cb_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_cbpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (CB)";
		picture="\snackpack_vests\ui\icon_v_marciras_cb_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_cb_co.paa",
			"snackpack_vests\textures\v_gear_01_cb_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_cbpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (CB)";
		picture="\snackpack_vests\ui\icon_v_marciras_cb_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_cb_co.paa",
			"snackpack_vests\textures\v_battle_belt_cb_co.paa",
			"snackpack_vests\textures\v_gear_01_cb_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_cbpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (CB)";
		picture="\snackpack_vests\ui\icon_v_marciras_cb_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_cb_co.paa",
			"snackpack_vests\textures\v_gear_01_cb_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_khkpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (KHK)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_khk_co.paa",
			"snackpack_vests\textures\v_gear_01_khk_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_khkpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (KHK)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_khk_co.paa",
			"snackpack_vests\textures\v_battle_belt_khk_co.paa",
			"snackpack_vests\textures\v_gear_01_khk_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_khkpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (KHK)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_khk_co.paa",
			"snackpack_vests\textures\v_gear_01_khk_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_khkpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (KHK)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_khk_co.paa",
			"snackpack_vests\textures\v_battle_belt_khk_co.paa",
			"snackpack_vests\textures\v_gear_01_khk_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_khkpso: ItemCore
	{
		author="Adacas + Snackbar";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (KHK)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_khk_co.paa",
			"snackpack_vests\textures\v_gear_01_khk_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_whitepso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (white)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_white_co.paa",
			"snackpack_vests\textures\v_gear_01_white_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_whitepso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (white)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_white_co.paa",
			"snackpack_vests\textures\v_battle_belt_white_co.paa",
			"snackpack_vests\textures\v_gear_01_white_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_whitepso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (white)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_white_co.paa",
			"snackpack_vests\textures\v_gear_01_white_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_whitepso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (white)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_white_co.paa",
			"snackpack_vests\textures\v_battle_belt_white_co.paa",
			"snackpack_vests\textures\v_gear_01_white_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_whitepso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (white)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_white_co.paa",
			"snackpack_vests\textures\v_gear_01_white_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_greypso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (grey)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_grey_co.paa",
			"snackpack_vests\textures\v_gear_01_grey_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_greypso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (grey)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_grey_co.paa",
			"snackpack_vests\textures\v_battle_belt_grey_co.paa",
			"snackpack_vests\textures\v_gear_01_grey_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_greypso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (grey)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_grey_co.paa",
			"snackpack_vests\textures\v_gear_01_grey_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_greypso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (grey)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_grey_co.paa",
			"snackpack_vests\textures\v_battle_belt_grey_co.paa",
			"snackpack_vests\textures\v_gear_01_grey_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_greypso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (grey)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_grey_co.paa",
			"snackpack_vests\textures\v_gear_01_grey_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_greydarkpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (greydark)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_greydark_co.paa",
			"snackpack_vests\textures\v_gear_01_greydark_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_greydarkpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (greydark)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_greydark_co.paa",
			"snackpack_vests\textures\v_battle_belt_greydark_co.paa",
			"snackpack_vests\textures\v_gear_01_greydark_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_greydarkpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (greydark)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_greydark_co.paa",
			"snackpack_vests\textures\v_gear_01_greydark_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_greydarkpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (greydark)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_greydark_co.paa",
			"snackpack_vests\textures\v_battle_belt_greydark_co.paa",
			"snackpack_vests\textures\v_gear_01_greydark_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_greydarkpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (greydark)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_greydark_co.paa",
			"snackpack_vests\textures\v_gear_01_greydark_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_blackpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier (black)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_black_co.paa",
			"snackpack_vests\textures\v_gear_01_black_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_grenadier_belt_blackpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Grenadier + Belt (black)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_black_co.paa",
			"snackpack_vests\textures\v_battle_belt_black_co.paa",
			"snackpack_vests\textures\v_gear_01_black_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_blackpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner (black)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_black_co.paa",
			"snackpack_vests\textures\v_gear_01_black_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_hgunner_belt_blackpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch HeavyGunner + Belt (black)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_black_co.paa",
			"snackpack_vests\textures\v_battle_belt_black_co.paa",
			"snackpack_vests\textures\v_gear_01_black_co.paa",
			"snackpack_vests\textures\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply200";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
	class snackpack_v_marciras_light_blackpso: ItemCore
	{
		author="Adacas + Snackbar + Corey";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="PSO Logo Patch Light (black)";
		picture="\snackpack_vests\ui\icon_v_marciras_khk_ca.paa";
		model="snackpack_vests\models\v_marciras_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"snackpack_vests\textures\v_marciras_black_co.paa",
			"snackpack_vests\textures\v_gear_01_black_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="snackpack_vests\models\v_marciras_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply60";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=30;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.2;
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198041227676";
	timepacked="1487250317";
};
