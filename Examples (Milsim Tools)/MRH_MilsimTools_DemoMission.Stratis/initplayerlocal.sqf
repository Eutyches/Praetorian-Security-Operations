waitUntil {(player == player) && (!isNull (findDisplay 46))};
sleep 2;
["splashscreen.paa", 5] call MRH_fnc_SplashScreen;
sleep 5;
[player,["dataEntry1"]]call MRH_fnc_MilsimTools_SoldierTab_attributeData;
sleep 2;
[player,["pic1"]]call MRH_fnc_MilsimTools_SoldierTab_attributePictures;