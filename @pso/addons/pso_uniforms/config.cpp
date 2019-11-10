    class CfgPatches
{
    class CRYEGEN3_MOHW_Uniform
    {
        version = "0.1";
        units[] = {};
        weapons[] = {};
        requiredVersion = "0.1";
        requiredAddons[] = {};
    };
};
class CfgVehicles
{

        class B_Soldier_base_F;
        class clothing1_atx: B_Soldier_base_F
    {
        scope = 2;
        author = "Retextured by Shifumii[PSO]";
        dlc = "";
        model = "\a3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\pso_uniforms\paa\clothing1_atx.paa"};

};
};

class cfgWeapons
{
  class UniformItem;
    class Uniform_Base;

    class clothing1_atx: Uniform_Base
    {
        scope = 2;
        author = "Retextured by Shifumii[PSO]";
        dlc = "";
        displayName = "Combat Fatigues (AT-X)";
        picture = "\pso_uniforms\paa\atx_UI.paa";
        model = "\a3\characters_F\BLUFOR\b_soldier_01.p3d";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "clothing1_atx";
            containerClass = "Supply40";
            mass = 40;
            allowedSlots[] = {"701","801","901"};
            armor = 0;
        };
    };
};
