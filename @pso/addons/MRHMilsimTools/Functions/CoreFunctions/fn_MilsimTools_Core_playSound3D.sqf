/*
Function name:MRH_fnc_MilsimTools_Core_playSound3D
Author: Mr H.
Description: plays sound defined in cfgSounds with playSound3D, if calling in multiple places (eg trigger onAct USE MRH_fnc_MilsimTools_Core_playSound3Dlocal instead)
Return value: true or false if sound wasn't found
Public: No
Parameters:
0- <STRING> className of the sound in configFile or missionConfigFile
1 - <OBJECT> that will play the sound //toDo make it work with position too
Example(s):
["MRH_US_Chatter1",MRH_player]call MRH_fnc_MilsimTools_Core_playSound3D;
*/
#include "MRH_C_Path.hpp"
params ["_sound","_soundSource"];

if !(isServer) exitWith {[_this,MRH_fnc_MilsimTools_Core_playSound3D] RemoteExec ["Call",2];};//will always run on server, do NOT call this function from a trigger or filter with local _unit

private _soundPath = [_sound]FUNC(getSoundFile);

if ((typeName _soundPath )isEqualTo "BOOL") exitWith {private _toTrace =format ["%1 wasn't found and couldn't be played by %2",_sound,_soundSource];TRACE(_toTrace);false};
playSound3D  [_soundPath,_soundSource];
true