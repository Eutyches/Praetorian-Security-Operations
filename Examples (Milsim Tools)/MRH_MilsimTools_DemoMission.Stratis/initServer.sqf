[] spawn 
{
AirdropIsAGo = false;
waitUntil {AirdropIsAGo};

_survivingplayers = call MRH_fnc_AllAlivePlayers;
[_survivingplayers,xplane] call MRH_fnc_MoveInCargo;

waitUntil {(xplane distance2d dummylandpad) <1000};
[[],
	{
		_estimatedTimeOfArrival = [xplane,dummylandpad] call MRH_fnc_travelTimeEta;
		_ETA = [_estimatedTimeOfArrival,"MM:SS"] call BIS_fnc_secondsToString;
		hint format ["DropZone is one klick away. ETA: %1 mikes",_ETA];
	}
] RemoteExec ["Spawn",0];
waitUntil {(xplane distance2d dummylandpad) <300};

[_survivingplayers,true,0.5] call MRH_fnc_staticLineChute;
sleep 60;
{deleteVehicle _x;}forEach crew xplane;deleteVehicle xplane;
};