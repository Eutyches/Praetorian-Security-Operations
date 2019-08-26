/*
Function name: MRH_fnc_MilsimTools_Core_AddBriefingRoster
Author: Mr H.
Description: Converts the roster structured text to diary compatible text and adds it to the diary
Return value: None
Public: No
Parameters: None
Example(s): No
call MRH_fnc_MilsimTools_Core_AddBriefingRoster;
*/
#include "MRH_C_Path.hpp"

_parameters = call MRH_fnc_MilsimTools_Core_ApplyRosterTextSettings;
_rosterText =  _parameters call MRH_fnc_MilsimTools_Core_GenerateRosterText;

_convert = [_rosterText,"t font","font face"] call CBA_fnc_replace;
_convert = [_convert, "t color", "font color"] call CBA_fnc_replace;
_convert = [_convert, "<img image=", "<img width='15' height='15' image="] call CBA_fnc_replace;



player createDiarySubject ["MRH_Roster",localize "STR_MRH_CORE_TEAM_ROSTERTITLE", PAAPATH(group.paa)];
_exe = player createDiaryRecord ["MRH_Roster", [localize "STR_MRH_CORE_TEAM_ROSTERTITLE",_convert]];

