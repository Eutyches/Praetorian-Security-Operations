 _statement = {
 _unit = _this select 0;
 _unit playMove "Acts_A_M03_briefing";
 "BunkerEntrancemarker" setMarkerAlpha 1;
 "AirDropmarker" setMarkerAlpha 1;
 missionNamespace setVariable ["MissionGivenToPlayers",true,true];
 [player,["pic3"]]call MRH_fnc_MilsimTools_SoldierTab_attributePictures;
 [player,["dataEntry3"]]call MRH_fnc_MilsimTools_SoldierTab_attributeData;
 };
 
 [commandingOfficer, "The news of a CSAT spy in our ranks is disturbing, fortunately our analysts have retrieved data from the booby trapped computer, I'll forward it to your PDA, make sure to share it with your mates. You have a new mission: Infiltate the CSAT's bunker and collect any data you will find over there. I have marked its location on your map and added some data to your tablet... If you have the mod backback on chest you should be able to talk to our pilot here and you will be paradropped on spot. If not spawn a vehicle and go there by your on means. Good luck soldier!", _statement,"GLOBAL",true] call MRH_fnc_simpleAceMessage;