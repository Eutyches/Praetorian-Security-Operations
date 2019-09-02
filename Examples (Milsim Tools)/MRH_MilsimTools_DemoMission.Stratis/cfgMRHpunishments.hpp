//template
/*
class cfgMRHPunishments //cannot be changed
{
	
	class MyPunishMentClassName //can be anything, good practice is to tag with your handle.
	{
		picture= "pathToYourPic.jpeg"; // can be in jpeg or paa, paa is advised 64*64 is a good size "" if you do not want a picture.
		displayName = "Your pretty punishment name here"; //name as displayed in the admin menu
		notificationMessage = "Your notification message here"; //message in the notification the punished player will see.
		code = "_player = _this select 0;"; // code to execute, executed in unscheduled environment (canSuspend). Selected player is passed as a parameter
		
	};
	
};
*/
//example:
class cfgMRHPunishments
{
	
	class Demo_Punishment
	{
		picture= "target.paa";
		displayName = "Kill the player";
		notificationMessage = "Admin doesn't like you, bang you're dead!";
		code = "_player = _this select 0; _player setDamage 1";
		
	};
	
};