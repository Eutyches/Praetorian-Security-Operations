params ["_laptop"];
[20,_laptop,"yourHackNameSucks",
	{
		_laptop = _this select 0;
		[[_laptop],
			{
				_laptop = _this select 0;
				[30,_laptop,"LastIntelFound",{[player,["picEnd"]]call MRH_fnc_MilsimTools_SoldierTab_attributePictures;}] call MRH_fnc_DownloadFile;
			}
		] RemoteExec ["Spawn",[0,-2] select isDedicated,true];
	}
] call MRH_fnc_Hack;