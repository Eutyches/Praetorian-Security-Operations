class CfgPatches
{
	class snackpack_headgear_cfg
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class snackpack_h_cap_01_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_goggles_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_goggles_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_goggles_khk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_goggles_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_goggles_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_goggles_RGR: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_RGR_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_RGR_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_goggles_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_goggles_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_goggles_CB: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_CB_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_01_goggles_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_02_goggles_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_backwards_03_goggles_MC: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="War is Hell Backwards + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_MC_ca.paa";
		model="\snackpack_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_MC_co_back.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_backwards_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
//pso hats
	class snackpack_h_cap_01_cb_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_cb_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_cb_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_cb_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_cb_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_cb_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_blue_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_blue_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_blue_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_blue_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_blue_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_blue_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_green_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_green_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_green_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_green_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_green_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_green_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_khk_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_khk_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_khk_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_khk_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_khk_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_khk_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_rgr_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_rgr_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_rgr_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_rgr_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_rgr_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_rgr_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
//
class snackpack_h_cap_01_black_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_black_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_black_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_black_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_black_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_black_pso: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (White Logo) + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_black_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_black_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_black_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_black_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_black_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_black_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_blue_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_blue_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_blue_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_blue_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_blue_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_blue_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_green_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_green_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_green_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_green_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_green_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_green_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (green)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (red)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_rgr_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_rgr_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_rgr_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_rgr_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_rgr_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_rgr_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (rgr)";
		picture="\snackpack_headgear\ui\icon_h_cap_rgr_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_khk_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_khk_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_khk_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_khk_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_khk_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_khk_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (khk)";
		picture="\snackpack_headgear\ui\icon_h_cap_khk_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_khk_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_cb_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (cb)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_cb_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (cb)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_cb_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (cb)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_cb_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (cb)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_cb_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat (cb)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_cb_pso_color: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Hat + Goggles (cb)";
		picture="\snackpack_headgear\ui\icon_h_cap_cb_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pso_color.paa",
			"\snackpack_headgear\textures\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
// other hats
		class snackpack_h_cap_01_blue_fdny: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FDNY (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_fdny.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_blue_fdny: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FDNY + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_fdny.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_blue_fdny: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FDNY (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_fdny.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_blue_fdny: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FDNY + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_fdny.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_blue_fdny: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FDNY (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_fdny.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_blue_fdny: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FDNY + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_fdny.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
//flags
class snackpack_h_cap_01_black_ger: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Germany (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_ger.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_black_ger: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Germany + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_ger.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_black_ger: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Germany (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_ger.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_black_ger: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Germany + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_ger.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_black_ger: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Germany (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_ger.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_black_ger: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Germany + Goggles (Black)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_black_co_ger.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_Blue_isr: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Israel (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_isr.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_Blue_isr: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Israel + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_isr.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_Blue_isr: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Israel (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_isr.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_Blue_isr: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Israel + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_isr.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_Blue_isr: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Israel (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_isr.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_Blue_isr: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Israel + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_isr.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_Blue_phi: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Philippines (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_phi.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_Blue_phi: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Philippines + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_phi.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_Blue_phi: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Philippines (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_phi.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_Blue_phi: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Philippines + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_phi.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_Blue_phi: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Philippines (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_phi.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_Blue_phi: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Philippines + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_phi.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_Blue_ser: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Serbia (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_ser.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_Blue_ser: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Serbia + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_ser.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_Blue_ser: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Serbia (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_ser.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_Blue_ser: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Serbia + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_ser.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_Blue_ser: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Serbia (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_ser.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_Blue_ser: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Serbia + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_ser.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_Blue_swe: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Sweden (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_swe.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_Blue_swe: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Sweden + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_swe.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_Blue_swe: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Sweden (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_swe.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_Blue_swe: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Sweden + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_swe.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_Blue_swe: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Sweden (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_swe.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_Blue_swe: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Sweden + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_swe.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_Blue_uru: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uruguay (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_uru.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_Blue_uru: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uruguay + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_uru.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_Blue_uru: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uruguay (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_uru.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_Blue_uru: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uruguay + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_uru.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_Blue_uru: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uruguay (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_uru.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_Blue_uru: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Uruguay + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_uru.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_Blue_usa: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United States (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_usa.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_Blue_usa: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United States + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_usa.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_Blue_usa: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United States (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_usa.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_Blue_usa: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United States + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_usa.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_Blue_usa: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United States (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_usa.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_Blue_usa: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United States + Goggles (Blue)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_blue_co_usa.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_green_ire: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Ireland (Green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_ire.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_green_ire: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Ireland + Goggles (Green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_ire.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_green_ire: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Ireland (Green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_ire.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_green_ire: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Ireland + Goggles (Green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_ire.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_green_ire: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Ireland (Green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_ire.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_green_ire: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Ireland + Goggles (Green)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_green_co_ire.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_aus: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Austria (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_aus.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_aus: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Austria + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_aus.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_aus: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Austria (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_aus.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_aus: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Austria + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_aus.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_aus: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Austria (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_aus.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_aus: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Austria + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_aus.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_nor: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Norway (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_nor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_nor: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Norway + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_nor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_nor: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Norway (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_nor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_nor: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Norway + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_nor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_nor: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Norway (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_nor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_nor: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Norway + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_nor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_uk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United Kingdom (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_uk.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_uk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United Kingdom + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_uk.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_uk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United Kingdom (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_uk.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_uk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United Kingdom + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_uk.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_uk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United Kingdom (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_uk.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_uk: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="United Kingdom + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_uk.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_gam: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gambia (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_gam.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_gam: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gambia + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_gam.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_gam: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gambia (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_gam.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_gam: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gambia + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_gam.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_gam: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gambia (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_gam.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_gam: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gambia + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_gam.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_red_can: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_can.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_red_can: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_can.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_red_can: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_can.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_red_can: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_can.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_red_can: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_can.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_red_can: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada + Goggles (Red)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_red_co_can.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
class snackpack_h_cap_01_orange_net: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Netherlands (Orange)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_orange_co_net.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_orange_net: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada + Goggles (Orange)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_orange_co_net.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_orange_net: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Netherlands (Orange)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_orange_co_net.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_orange_net: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada + Goggles (Orange)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_orange_co_net.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_orange_net: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Netherlands (Orange)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_orange_co_net.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_orange_net: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Canada + Goggles (Orange)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_orange_co_net.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
//pants
	class snackpack_h_cap_01_rgr_pants: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Pants (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pants.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_01_goggles_rgr_pants: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Pants + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pants.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_rgr_pants: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Pants (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pants.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_02_goggles_rgr_pants: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Pants + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Surefire"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pants.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_Surefire"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_rgr_pants: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Pants (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_rgr_co_pants.paa",
			"\snackpack_headgear\textures\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"_ESS"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
	class snackpack_h_cap_03_goggles_rgr_pants: ItemCore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Pants + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_cap_CB_ca.paa";
		model="\snackpack_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_cap_cb_co_pants.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\snackpack_headgear\models\h_cap_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=.5;
				};
			};
		};
	};
//
class snackpack_h_opscore_01_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso: Itemcore
	{
		author="PSO Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_archer: Itemcore
	{
		author="PSO/Archer Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_archer: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Archer Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_archer.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_bandit: Itemcore
	{
		author="PSO/Bandit Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_bandit: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Bandit Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_bandit.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_condor: Itemcore
	{
		author="PSO/Condor Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_condor: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Condor Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_condor.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_overlord: Itemcore
	{
		author="PSO/Overlord Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_overlord: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Overlord Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_overlord.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_medic: Itemcore
	{
		author="PSO/Medic Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_medic: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Medic Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_medic.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_wih: Itemcore
	{
		author="PSO/WiH Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_wih: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/WiH Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_wih.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
class snackpack_h_opscore_01_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_khk_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (KHK Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_khk_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_khk_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_CB_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (CB Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_CB_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_CB_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_CB_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
		class snackpack_h_opscore_01_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_MC_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (MC)";
		picture="\snackpack_headgear\ui\icon_h_opscore_MC_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_MC_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_01_goggles_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_02_goggles_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_03_goggles_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_04_goggles_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_RGR_hexagon_pso_twilight: Itemcore
	{
		author="PSO/Twilight Helmet (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_05_goggles_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_ESS",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_ESS",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class snackpack_h_opscore_06_goggles_RGR_hexagon_pso_twilight: Itemcore
	{
		author="Adacas (retexture by Snackbar)";
		scope=2;
		weaponPoolAvailable=1;
		displayName="PSO/Twilight Helmet + Goggles (RGR Hexagon)";
		picture="\snackpack_headgear\ui\icon_h_opscore_RGR_ca.paa";
		model="\snackpack_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_IR_Strobe",
			"_Manta_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"\snackpack_headgear\textures\h_opscore_RGR_hexagon_co_pso_twilight.paa",
			"\snackpack_headgear\textures\h_gear_01_RGR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\snackpack_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_IR_Strobe",
				"_Manta_Back"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198041227676";
	timepacked="1487522056";
};
