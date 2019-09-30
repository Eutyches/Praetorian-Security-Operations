class CfgPatches
{
	class pso_cos_backpacks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		authors[] = {"Corey"};
	};
};

class CfgVehicles {
	class backpack_2_TAN; //External class reference (cos_back_pack)
	class KIT_BAG_Alpin_OD; //External class reference (cos_back_pack)
	class KIT_BAG_pince_OD; //External class reference (cos_back_pack)
	class KIT_BAG_R_OD; //External class reference (cos_back_pack)
	class KIT_BAG_od; //External class reference (cos_back_pack)
	class SOG_BAG_tan; //External class reference (cos_back_pack)
	class SOG_BAG_BREACHER_tan; //External class reference (cos_back_pack)
	class SOG_BAG_recon_tan; //External class reference (cos_back_pack)
	class SOG_BAG_med_tan; //External class reference (cos_back_pack)
	class SOG_BAG_ALPIN_tan; //External class reference (cos_back_pack)
	
//.backpack_personel
	class backpack_2_white : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_WHITE";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\backpack_combat_white_co.paa"};
	};
	class backpack_2_grey : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_GREY";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\backpack_combat_grey_co.paa"};
	};
	class backpack_2_black : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_BLACK";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\backpack_combat_black_co.paa"};
	};
	class backpack_2_m81 : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_M81 Woodland";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\backpack_combat_m81_co.paa"};
	};
	class backpack_2_mcarctic : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_Multicam Arctic";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\backpack_combat_mcarctic_co.paa"};
	};
//.KIT_BAG_Alpin
	class KIT_BAG_Alpin_white : KIT_BAG_Alpin_OD {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_alpine_white";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_Alpin_grey : KIT_BAG_Alpin_OD {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_alpine_grey";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
//.KIT_BAG_pince
	class KIT_BAG_pince_white : KIT_BAG_pince_OD {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_white";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_pince_grey : KIT_BAG_pince_OD {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_grey";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
//.KIT_BAG_R_
	class KIT_BAG_R_white : KIT_BAG_R_OD {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon Kitbag PSO White";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_R_grey : KIT_BAG_R_OD {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon Kitbag PSO Grey";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};	
//.KIT_BAG
	class KIT_BAG_white : KIT_BAG_od {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_white";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_grey : KIT_BAG_od {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_grey";
		hiddenSelections[] = {"camo", "camo1", "camo3", "camo6"};
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
//SOG_BAG
	class SOG_BAG_white : SOG_BAG_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_grey : SOG_BAG_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
//SOG_BAG_BREACHER
	class SOG_BAG_BREACHER_white : SOG_BAG_BREACHER_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_BREACHER_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_BREACHER_grey : SOG_BAG_BREACHER_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack__BREACHER_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
//SOG_BAG_recon
	class SOG_BAG_recon_white : SOG_BAG_recon_tan {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon SFF PSO White";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_recon_grey : SOG_BAG_recon_tan {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon SFF PSO Grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
//SOG_BAG_med
	class SOG_BAG_med_white : SOG_BAG_med_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_med_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_med_grey : SOG_BAG_med_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack__med_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
//SOG_BAG_ALPIN
	class SOG_BAG_ALPIN_white : SOG_BAG_ALPIN_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_ALPIN_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_ALPIN_grey : SOG_BAG_ALPIN_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack__ALPIN_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
};
