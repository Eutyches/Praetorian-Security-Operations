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
	class KIT_BAG_Alpin_TAN; //External class reference (cos_back_pack)
	class KIT_BAG_pince_TAN; //External class reference (cos_back_pack)
	class KIT_BAG_R_TAN; //External class reference (cos_back_pack)
	class KIT_BAG_TAN; //External class reference (cos_back_pack)
	class SOG_BAG_tan; //External class reference (cos_back_pack)
	class SOG_BAG_BREACHER_tan; //External class reference (cos_back_pack)
	class SOG_BAG_recon_tan; //External class reference (cos_back_pack)
	class SOG_BAG_med_tan; //External class reference (cos_back_pack)
	class SOG_BAG_ALPIN_tan; //External class reference (cos_back_pack)

//.backpack_personel
	class backpack_2_white : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal White";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_white_co.paa"};
	};
	class backpack_2_grey : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal Grey";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_grey_co.paa"};
	};
	class backpack_2_greydark : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal Grey Dark";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_greydark_co.paa"};
	};
	class backpack_2_black : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal Black";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_black_co.paa"};
	};
	class backpack_2_coyote : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal Coyote Brown";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_cb_co.paa"};
	};
	class backpack_2_m81 : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal M81 Woodland";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_m81_co.paa"};
	};
	class backpack_2_mcarctic : backpack_2_TAN {
		author = "Retextured by Corey";
		displayName = "PSO Personal Multicam Arctic";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_mcarctic_co.paa"};
	};
//.KIT_BAG_Alpin
	class KIT_BAG_Alpin_white : KIT_BAG_Alpin_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Alpine White";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_Alpin_grey : KIT_BAG_Alpin_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Alpine Grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_Alpin_greydark : KIT_BAG_Alpin_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Alpine Grey Dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_Alpin_coyote : KIT_BAG_Alpin_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Alpine Coyote Brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//.KIT_BAG_pince
	class KIT_BAG_pince_white : KIT_BAG_pince_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Pliers White";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_pince_grey : KIT_BAG_pince_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Pliers Grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_pince_greydark : KIT_BAG_pince_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Pliers Grey Dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_pince_coyote : KIT_BAG_pince_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Pliers Coyote Brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//.KIT_BAG_R_
	class KIT_BAG_R_white : KIT_BAG_R_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO Kitbag White";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_R_grey : KIT_BAG_R_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO Kitbag Grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_R_greydark : KIT_BAG_R_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO Kitbag Grey Dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_R_coyote : KIT_BAG_R_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO Kitbag Coyote Brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//.KIT_BAG
	class KIT_BAG_white : KIT_BAG_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Standard White";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_grey : KIT_BAG_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Standard Grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_greydark : KIT_BAG_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Standard Grey Dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_coyote : KIT_BAG_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO Kitbag Standard Coyote Brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//	class KIT_BAG_LABEL : KIT_BAG_TAN {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = ".KIT_BAG_LABEL";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_LABEL.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_LABEL.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_LABEL.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_LABEL.co.paa"};
	};
//SOG_BAG 
	class SOG_BAG_white : SOG_BAG_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Standard White";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_grey : SOG_BAG_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Standard Grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_greydark : SOG_BAG_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Standard Grey Dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_coyote : SOG_BAG_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Standard Coyote Brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_BREACHER
	class SOG_BAG_BREACHER_white : SOG_BAG_BREACHER_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Breacher White";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_BREACHER_grey : SOG_BAG_BREACHER_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Breacher Grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_BREACHER_greydark : SOG_BAG_BREACHER_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Breacher Grey Dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_BREACHER_coyote : SOG_BAG_BREACHER_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Breacher Coyote Brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_recon
	class SOG_BAG_recon_white : SOG_BAG_recon_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO SFF White";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_recon_grey : SOG_BAG_recon_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO SFF Grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_recon_greydark : SOG_BAG_recon_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO SFF Grey Dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_recon_coyote : SOG_BAG_recon_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "RT-1523G PSO SFF Coyote Brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_med
	class SOG_BAG_med_white : SOG_BAG_med_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Medic White";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_med_grey : SOG_BAG_med_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Medic Grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_med_greydark : SOG_BAG_med_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Medic Grey Dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_med_coyote : SOG_BAG_med_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Medic Coyote Brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_ALPIN
	class SOG_BAG_ALPIN_white : SOG_BAG_ALPIN_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Alpine White";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_ALPIN_grey : SOG_BAG_ALPIN_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Alpine Grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_ALPIN_greydark : SOG_BAG_ALPIN_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Alpine Grey Dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_ALPIN_coyote : SOG_BAG_ALPIN_tan {
		author = "Vulkan/modifiedbySakuraba/retexturedbyCorey";
		displayName = "PSO SFF Alpine Coyote Brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
};