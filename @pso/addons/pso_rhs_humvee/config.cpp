/* 
** Inherited Class Information // rhsusf_hmmwv **

M998
8 Seater, Open
rhsusf_m998_d_2dr;
hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};

M1025
4 Seater, Closed
rhsusf_m1025_d;
hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};


** GitHub/Praetorian-Security-Operations/Texture Templates/Humvee Retexturing Information **
hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"pso_rhs_humvee\paa\a_exterior.paa","pso_rhs_humvee\paa\b_interior.paa","pso_rhs_humvee\paa\c_a2.paa","pso_rhs_humvee\paa\d_wheels.paa","pso_rhs_humvee\paa\e_mainbody.paa","pso_rhs_humvee\paa\f_gratting.paa","pso_rhs_humvee\paa\g_camo1_tile.paa","pso_rhs_humvee\paa\h_camo2_m1025.paa","pso_rhs_humvee\paa\i_unitdecals1.paa","pso_rhs_humvee\paa\j_unitdecals2.paa"};

Most retextures by Corey of Praetorian Security Operations. Black exteriors by Dunbar Snackbar.
*/

class CfgPatches
{
	class pso_rhs_humvee
	{
		units[] = {"rhsusf_m1025_pso_black","rhsusf_m1025_pso_white","rhsusf_m1025_pso_olive","rhsusf_m1025_pso_tan","rhsusf_m998_pso_black","rhsusf_m998_pso_white","rhsusf_m998_pso_olive","rhsusf_m998_pso_tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_hmmwv"};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class rhsusf_m1025_d;
	class rhsusf_m998_d_2dr;
	
	class rhsusf_m998_pso_black: rhsusf_m998_d_2dr;
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "PSO Humvee Open 8 Seater Black";
		DLC = "";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
		hiddenSelectionsTextures[] = {"pso_rhs_humvee\paa\a_exterior.paa","pso_rhs_humvee\paa\b_interior.paa","pso_rhs_humvee\paa\c_a2.paa","pso_rhs_humvee\paa\d_wheels.paa","pso_rhs_humvee\paa\e_mainbody.paa","pso_rhs_humvee\paa\f_gratting.paa","pso_rhs_humvee\paa\g_camo1_tile.paa","pso_rhs_humvee\paa\h_camo2_m1025.paa","pso_rhs_humvee\paa\i_unitdecals1.paa","pso_rhs_humvee\paa\j_unitdecals2.paa"};
	};
	
	class rhsusf_m1025_pso_black: rhsusf_m1025_d;
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Snackbar + Corey";
		displayName = "PSO Humvee Closed 4 Seater Black";
		DLC = "";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
		hiddenSelectionsTextures[] = {"pso_rhs_humvee\paa\a_exterior.paa","pso_rhs_humvee\paa\b_interior.paa","pso_rhs_humvee\paa\c_a2.paa","pso_rhs_humvee\paa\d_wheels.paa","pso_rhs_humvee\paa\e_mainbody.paa","pso_rhs_humvee\paa\f_gratting.paa","pso_rhs_humvee\paa\g_camo1_tile.paa","pso_rhs_humvee\paa\h_camo2_m1025.paa","pso_rhs_humvee\paa\i_unitdecals1.paa","pso_rhs_humvee\paa\j_unitdecals2.paa"};
	};
};