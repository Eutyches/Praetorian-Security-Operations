 if !("zade_boc" in activatedAddons) ExitWith {hint "Back pack on chest mod is not activated"};
 hint "Back Pack on chest detected, you can talk to the pilot";
 _statement = {
 _unit = _this select 0;
 missionNamespace setVariable ["AirdropIsAGo",true,true];
 };
 
 [SuperPilot, "Lets go!", _statement,"LOCAL",true] call MRH_fnc_simpleAceMessage;