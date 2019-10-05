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
		author = "Retexture by Corey";
		displayName = ".backpack_personel_WHITE";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_white_co.paa"};
	};
	class backpack_2_grey : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_GREY";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_grey_co.paa"};
	};
	class backpack_2_greydark : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_GREY DARK";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_greydark_co.paa"};
	};
	class backpack_2_black : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_BLACK";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_black_co.paa"};
	};
	class backpack_2_coyote : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_COYOTE BROWN";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_cb_co.paa"};
	};
	class backpack_2_m81 : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_M81 Woodland";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_m81_co.paa"};
	};
	class backpack_2_mcarctic : backpack_2_TAN {
		author = "Retexture by Corey";
		displayName = ".backpack_personel_Multicam Arctic";
		picture = "pso_cos_backpacks\paa\icon\Sac_assausl_od.paa";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\combat\backpack_combat_mcarctic_co.paa"};
	};
//.KIT_BAG_Alpin
	class KIT_BAG_Alpin_white : KIT_BAG_Alpin_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_alpine_white";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_Alpin_grey : KIT_BAG_Alpin_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_alpine_grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_Alpin_greydark : KIT_BAG_Alpin_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_alpine_grey dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_Alpin_coyote : KIT_BAG_Alpin_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_alpine_coyote brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//.KIT_BAG_pince
	class KIT_BAG_pince_white : KIT_BAG_pince_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_white";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_pince_grey : KIT_BAG_pince_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_pince_greydark : KIT_BAG_pince_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_grey dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_pince_coyote : KIT_BAG_pince_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_pince_coyote brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//.KIT_BAG_R_
	class KIT_BAG_R_white : KIT_BAG_R_TAN {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon Kitbag PSO White";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_R_grey : KIT_BAG_R_TAN {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon Kitbag PSO Grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_R_greydark : KIT_BAG_R_TAN {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon Kitbag PSO Grey Dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_R_coyote : KIT_BAG_R_TAN {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon Kitbag PSO Coyote Brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//.KIT_BAG
	class KIT_BAG_white : KIT_BAG_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_white";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_white.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_white.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_white.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_white.co.paa"};
	};
	class KIT_BAG_grey : KIT_BAG_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_grey";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_grey.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_grey.co.paa"};
	};
	class KIT_BAG_greydark : KIT_BAG_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_grey dark";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_greydark.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_greydark.co.paa"};
	};
	class KIT_BAG_coyote : KIT_BAG_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_coyote brown";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_cb.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_cb.co.paa"};
	};
//	class KIT_BAG_LABEL : KIT_BAG_TAN {
		author = "Retexture by Corey";
		displayName = ".KIT_BAG_LABEL";
		hiddenSelectionsTextures[] = {"pso_cos_backpacks\paa\kit_bag\saccorps_LABEL.co.paa", "pso_cos_backpacks\paa\kit_bag\pochelateral_LABEL.co.paa", "pso_cos_backpacks\paa\kit_bag\assets_strap_LABEL.co.paa", "pso_cos_backpacks\paa\kit_bag\KIT_strap_LABEL.co.paa"};
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
	class SOG_BAG_greydark : SOG_BAG_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_grey dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_coyote : SOG_BAG_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_coyote brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_BREACHER
	class SOG_BAG_BREACHER_white : SOG_BAG_BREACHER_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_BREACHER_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_BREACHER_grey : SOG_BAG_BREACHER_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_BREACHER_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_BREACHER_greydark : SOG_BAG_BREACHER_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_BREACHER_grey dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_BREACHER_coyote : SOG_BAG_BREACHER_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_BREACHER_coyote brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
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
	class SOG_BAG_recon_greydark : SOG_BAG_recon_tan {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon SFF PSO Grey Dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_recon_coyote : SOG_BAG_recon_tan {
		author = "Retexture by Corey";
		displayName = "RT-1523G Recon SFF PSO Coyote";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_med
	class SOG_BAG_med_white : SOG_BAG_med_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_med_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_med_grey : SOG_BAG_med_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_med_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_med_greydark : SOG_BAG_med_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_med_grey dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_med_coyote : SOG_BAG_med_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_med_coyote brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
//SOG_BAG_ALPIN
	class SOG_BAG_ALPIN_white : SOG_BAG_ALPIN_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_ALPIN_white";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_white_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_white.co.paa"};
	};
	class SOG_BAG_ALPIN_grey : SOG_BAG_ALPIN_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_ALPIN_grey";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_grey_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_grey.co.paa"};
	};
	class SOG_BAG_ALPIN_greydark : SOG_BAG_ALPIN_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_ALPIN_grey dark";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_greydark_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_greydark.co.paa"};
	};
	class SOG_BAG_ALPIN_coyote : SOG_BAG_ALPIN_tan {
		author = "Retexture by Corey";
		displayName = ".SF_Backpack_ALPIN_coyote brown";
		hiddenSelectionsTextures[] = {"\pso_cos_backpacks\paa\sog_backpack\SOG_BAG_cb_co.paa", "pso_cos_backpacks\paa\sog_backpack\assets_strap_cb.co.paa"};
	};
};