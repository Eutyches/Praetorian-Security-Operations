class CfgPatches
{
	class A3_Weapons_F_Tank_Launchers_MRAWS
	{
		addonRootClass="A3_Weapons_F_Tank";
		requiredAddons[]=
		{
			"A3_Weapons_F_Tank"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"launch_MRAWS_white_F",
			"launch_MRAWS_white_rail_F",
		};
	};
};
class PointerSlot;
class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_MRAWS_base_F: Launcher_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="launch_MRAWS_base_F";
		scope=0;
		displayName="MAAWS Mk4 Mod 1 (Olive)";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\launch_MRAWS_F.p3d";
		picture="\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_darkgreen_F_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\a3\Weapons_F_Tank\Launchers\MRAWS\Data\Anim\MRAWS.rtm"
		};
		magazines[]=
		{
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HEAT55_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		maxZeroing=600;
		modelOptics="\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
		weaponInfoType="RscOpticsRangeFinderMRAWS";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.07;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.80000001;
			maxRange=700;
			maxRangeProbab=0.1;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.31622776,
			1.5,
			900
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.15000001,0.5};
				iconScale=0.25;
			};
		};
		class Library
		{
			libTextDesc="$STR_A3_maaws_library1";
		};
		descriptionShort="$STR_A3_cfgweapons_launch_mraws_descriptionshort0";
	};
	class launch_MRAWS_white_F: launch_MRAWS_base_F
	{
		author="Reskinned by Shifumii[PSO]";
		_generalMacro="launch_MRAWS_white_F";
		baseWeapon="launch_MRAWS_white_F";
		scope=2;
		displayName="MAAWS Mk4 Mod 1 (White)";
		picture="\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_olive_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\pso_MRAWS\paa\launch_MRAWS_white_01_F_co.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
		};
	};
	class launch_MRAWS_white_rail_F: launch_MRAWS_white_F
	{
		author="Reskinned by Shifumii[PSO]";
		_generalMacro="launch_MRAWS_white_rail_F";
		baseWeapon="launch_MRAWS_white_rail_F";
		scope=2;
		displayName="MAAWS Mk4 Mod 0 (White)";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\launch_MRAWS_rail_F.p3d";
		picture="\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_rails_olive_F_X_CA.paa";
		weaponInfoType="RscWeaponEmpty";
		modelOptics="\a3\Weapons_F_Tank\acc\reticle_MRAWSOld.p3d";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\pso_MRAWS\paa\launch_MRAWS_white_01_F_co.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
		};
	};
};
class CfgVehicles
{
	class Launcher_Base_F;
	class Weapon_launch_MRAWS_white_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="MAAWS Mk4 Mod 1 (White)";
		author="Reskinned by Shifumii[PSO]";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_white_F
			{
				weapon="launch_MRAWS_white_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_white_rail_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="MAAWS Mk4 Mod 0 (White)";
		author="Reskinned by Shifumii[PSO]";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_white_rail_F
			{
				weapon="launch_MRAWS_white_rail_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
};
