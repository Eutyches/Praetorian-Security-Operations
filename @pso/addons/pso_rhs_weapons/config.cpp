//This config file has been adapted from the config in FlankLabs RHS - Weapon Retextures. Corey (PSO) has done the retexturing from scratch.

class CfgPatches {
	class pso_rhs_weapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author = "Corey";
	};
};

class CfgWeapons
{
	class rhs_weap_SCAR_H_CQC_Base;
    class FLB_Mk17_Camo1: rhs_weap_SCAR_H_CQC_Base
    {
        scope=2;
        displayName="[01] Mk17 CQC (Spray Camo)";
        author="FlankenLabs";
        picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		hiddenSelections[]=
		{
			"camo01"
		};
		hiddenSelectionsTextures[]=
		{
			"FLB_Weapons\Data\Mk17\mk17_camo1_co.paa"
		};
		rhs_grip1_change="FLB_Mk17_Camo1_grip";
		rhs_grip2_change="FLB_Mk17_Camo1_grip2";
		rhs_grip3_change="FLB_Mk17_Camo1_grip3";
		baseWeapon="FLB_Mk17_Camo1";
	};
	class FLB_Mk17_Camo1_grip: FLB_Mk17_Camo1
	{
		author="FlankenLabs";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="UnderBarrelSlot";
			};
		};
	};
	class FLB_Mk17_Camo1_grip2: FLB_Mk17_Camo1_grip
	{
		author="FlankenLabs";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="UnderBarrelSlot";
			};
		};
	};
	class FLB_Mk17_Camo1_grip3: FLB_Mk17_Camo1_grip2
	{
		author="FlankenLabs";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="UnderBarrelSlot";
			};
		};
	};
    class FLB_Mk17_Desert: rhs_weap_SCAR_H_CQC_Base
    {
        scope=2;
        displayName="[01] Mk17 CQC (Desert Camo)";
        author="FlankenLabs";
        picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		hiddenSelections[]=
		{
			"camo01"
		};
		hiddenSelectionsTextures[]=
		{
			"FLB_Weapons\Data\Mk17\mk17_des1_co.paa"
		};
		rhs_grip1_change="FLB_Mk17_Desert_grip";
		rhs_grip2_change="FLB_Mk17_Desert_grip2";
		rhs_grip3_change="FLB_Mk17_Desert_grip3";
		baseWeapon="FLB_Mk17_Desert";
	};
	class FLB_Mk17_Desert_grip: FLB_Mk17_Desert
	{
		author="FlankenLabs";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="UnderBarrelSlot";
			};
		};
	};
	class FLB_Mk17_Desert_grip2: FLB_Mk17_Desert_grip
	{
		author="FlankenLabs";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="UnderBarrelSlot";
			};
		};
	};
	class FLB_Mk17_Desert_grip3: FLB_Mk17_Desert_grip2
	{
		author="FlankenLabs";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk17_CQC_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="UnderBarrelSlot";
			};
		};
	};
};
