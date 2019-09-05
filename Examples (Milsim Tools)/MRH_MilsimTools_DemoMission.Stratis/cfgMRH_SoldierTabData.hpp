//Template
/*
class MRH_SoldierTabData //mandatory, do not change
{
	//you can have as many entries as you want
	
	class MyFirstData //must be unique, can be anything
	{
	title = "YourTitleHere"; // simple text
	text = "YourTextHere";// accepts structured text, DO NOT use double quotes("") inside.

	};
	
	class MySecondData //must be unique,can be anything
	{
	title = "YourTitleHere";
	text = "YourTextHere";// accepts structured text, DO NOT use double quotes("") inside.
		
		//you can have as many sub entries as you want
		
		class MyFirstSubEntry //must be unique,can be anything
		{
		titleSub = "YourTitleHere";
		textSub = "YourTextHere";// accepts structured text, DO NOT use double quotes("") inside.
		};
		
		class MySecondSubEntry
		{
		titleSub = "YourTitleHere";
		textSub = "YourTextHere You can use <br/> and also include pictures  <img size = '15' image ='pathToYourPicture.jpg'/>"; //after thorough testing 15 seems to be the most appropriate size for pictures. Smaller is OK, bigger might not be fully displayed.
		};
	};
};
*/
//Example
class MRH_SoldierTabData
{
	class dataEntry1
	{
	title = "Welcome to MRH Milsim Tools Demo Mission.";
	text = "This is a demo data entry.";
		class subEntry1
		{
		titleSub = "Visit the Wiki for more info.";
		textSub = "You will find a full companion wiki here: <a color='#0000FF' href='https://mrhmilsimtools-arma3-mod.wikia.com/wiki/MRHMilsimTools_ARMA3_Mod_Wiki'>MRH Milsim Tools Wiki</a><br/>";
		};
		
		class subEntry2
		{
		titleSub = "How to set up data an pictures for this tablet.";
		textSub = "Wiki page here: <a color='#0000FF' href='https://mrhmilsimtools-arma3-mod.wikia.com/wiki/Soldier_PDA_use_and_framework_guide'>Soldier PDA use and framework guide</a><br/><img size = '15' image ='milsimToolsLogo.paa'/><br/><br/>";
		};
	};
	class dataEntry2
	{
	title = "Secret message";
	text = "From: WorstSpook82 to: CSAT High Command.<br/>You will find my report and personnal messages below.";
		class subEntry1
		{
		titleSub = "Hey guys!";
		textSub = "How is it going in our shiny new super bunker? Here's a picture of me incognito at the NATO base<br/><img size = '15' image ='pic1.jpg'/><br/>";
		};
		
		class subEntry2
		{
		titleSub = "WorstSpook82's report.";
		textSub = "These NATO guys are so stupid, they will never find me!";
		};
	};
	class dataEntry4
	{
	title = "Mission: Catch the spy!";
	text = "If you find him he will surrender, here's a picture of him:<br/><img size = '15' image ='pic1.jpg'/><br/>";

	};
	class dataEntry3
	{
	title = "Mission: Raid the CSAT Bunker";
	text = "The intel discovered on the spy suggests that the CSAT forces have a secret entrance on Stratis. You can follow the two courses of action described below to reach it's entrance.";
		class subEntry1
		{
		titleSub = "I) Paradrop on the spot.";
		textSub = "This action makes use of <a color='#0000FF' href='https://mrhmilsimtools-arma3-mod.wikia.com/wiki/Static_line_parachute_jump'>Milsim Tools static line jump function</a> and it requires the mod <a color='#0000FF' href='https://steamcommunity.com/sharedfiles/filedetails/?id=820924072&searchtext=backpack+on+chest'> to be enabled.</a><br/> If the addon is activated in the current game the pilot will have a conversation interaction that allows you tu use this function. ";
		};
		
		class subEntry2
		{
		titleSub = "II) Spawn a helicopter and reach the zone by yourself.";
		textSub = "You can use <a color='#0000FF' href='https://mrhmilsimtools-arma3-mod.wikia.com/wiki/Vehicle_spawner'> the vehicle spawner</a> located in the control tower to spawn a heli and get your troops there. Be advised that this mission enforces advanced flight mode for helicopters.";
		};
	};
	class dataEntry5
	{
	title = "See other mods made by the [TGV] team.";
	text = "Our Milsim unit the [TGV] as more coders than players. Here are the other mods created by team members:";
		class subEntry1
		{
		titleSub = "Tilk's ballistic missiles.";
		textSub = "The mod adds prop ballistic missiles to the game and can be downloaded <a color='#0000FF' href='https://steamcommunity.com/sharedfiles/filedetails/?id=1383958112'> here</a>.<br/><img size = '15' image ='ballistic.jpg'/>";
		};
		
		class subEntry2
		{
		titleSub = "RedBelette's Red Framework.";
		textSub = "The mod provides tons of functions to help mission makers make great missions and can be downloaded <a color='#0000FF' href='https://steamcommunity.com/sharedfiles/filedetails/?id=1226877632'> here.</a><br/><img size = '15' image ='redf.jpg'/>";
		};
		
		class subEntry3
		{
		titleSub = "Mister H.'s Satellite.";
		textSub = "The mod adds a satellite to Arma 3 and can be downloaded <a color='#0000FF' href='https://steamcommunity.com/sharedfiles/filedetails/?id=1310581330'> here</a><br/><img size = '15' image ='satellite.jpg'/>";
		};
	};
	class dataEntry6
	{
	title = "Examples";
	text = "This is a parent entry.";
		class subEntry1
		{
		titleSub = "Sub 1";
		textSub = "This is a first sub entry.";
		};
		
		class subEntry2
		{
		titleSub = "Sub 2";
		textSub = "This is a second sub entry.";
		};
	};
	
		class dataEntry7
	{
	title = "MRH Milsim Tools Mod Overview";
	text = "MRH Milsim Tools is a mod aimed at expanding the possibilities of scenarios for milsim units, as well as adding permanent features to missions. It is first and foremost meant to be used in milsim scenarios in multiplayer. Though some features will still work in SP, a lot of them will not behave properly in a single player environment.<br/>Please also note that a lot of the mod's features are built around the premise that most milsim units send dead players to a 'respawn bunker' from which they cannot escape until the end of the mission. So when killed a player will be considered 'dead' by the mod. An admin, or the use of the JIP menu can reset that status but if you use a different respawn scheme some things might not work properly.<br/>While some parts of the mod are plug and play, most features will require to be added to the mission by the mission maker, and as such require some basic scripting knowledge<br/>This mod is in constant WIP, the idea being that each time I develop something for a mission for my unit I will include it here.";
		class subEntry1
		{
		titleSub = "Fully configurable team roster.";
		textSub = "You can change team roster color theme, decide if you want to display AIs and AI groups, even show all sides in the roster.";
		};
		
		class subEntry2
		{
		titleSub = "Tracking of dead, alive, disconnected, reconnected players.";
		textSub = "Players will be flagged 'dead' by the mod if they are killed and respawn, allowing you to know they are dead even if the 'alive _x' scripting command returns TRUE. The mod keeps a registry of dead and disconnected players, you can decide to kill players that where flagged dead upon disconnecting when they reconnect (optional).";
		};
				class subEntry3
		{
		titleSub = "Player intel data: Role, rank with NATO code, customizable rank insignia, radio frequency. ";
		textSub = "Alongside CBA's option to change group name in the lobby, you can set a radio frequency for each group. In the team roster,and on the soldier's tablet the name you defined for the group will be shown instead of default Arma group naming (Alpha 1-1 etc.). Radio frequency is optional, can be set and will be shown in the lobby and on the player's PDA but does not affect either ACRE2 or TFAR radio frequencies.";
		};
				class subEntry4
		{
		titleSub = "Admin warnings for current death toll. ";
		textSub = "Whenever a player dies, admin is prompted a hint (this feature can be disabled). You can set a percentage of acceptable death ratio upon which the admin menu will automatically open allowing you to end the mission or allow players to respawn";
		};
				class subEntry5
		{
		titleSub = "Setting to remove map for players that are not formation leaders AFTER the briefing screen";
		textSub = "Players with a map in their inventory will keep it during the briefing stage, useful if you do your briefings before launching the mission, but if you enable this option, only group leaders will keep the map once in game";
		};
				class subEntry6
		{
		titleSub = "Short automated cut scene when players join in.";
		textSub = "A small cutscene where the camera moves from above the player to first person view will play (locally of course) when the player joins the game (optional, can be disabled).";
		};
				class subEntry7
		{
		titleSub = "Removal of disconnected players bodies.";
		textSub = "Bodies of disconnected players will automatically be deleted thus preventing looting by other players! (optional, can be disabled).";
		};
				class subEntry8
		{
		titleSub = "Enhanced and configurable JIP menu.";
		textSub = "Whenever a player Joins In Progress the JIP menu will open allowing them to rejoin their group (optional, can be disabled). You can decide to show all sides in the menu (useful for PVP missions) and include AI groups with playable units. The player can join any other player they select, if the selected player is in a vehicle and the vehicle has free cargo place the player will be moved inside the vehicle. Players cannot join other players if their vehicle is full. Players inside a vehicle are marked with an icon, the icon is red if the vehicle is full.<br/><br/>The mod includes a function to turn any object into a JIP menu access point.<br/><br/>When the JIP menu is used, a small cut scene plays for the teleported player and if they where flagged as 'dead' the mod flags them as 'alive' so you can use it to allow dead players back in the game.";
		};
				class subEntry9
		{
		titleSub = "Powerful admin menu. ";
		textSub = "The admin menu can only be opened by a logged in admin and therefore doesn't work in SP, it includes a lot of features, mission statistics, dead players, etc. From the admin menu you can end the mission with a default ending or with any ending defined in the mission's cfgDebriefings. You can reset a player's status if they have been flagged 'dead'. You can heal all players (ACE damages) or just the selected player. You can remotely open the JIP menu for a selected player or for all dead players. You can see the selected's player location on the map and apply some preset punishment for a given player (chicken on head, push ups etc.). Punishments can be customized from the mission's description.ext. Last but not least you can remotely edit any player's equipment (opens ACE arsenal). ";
		};		class subEntry10
		{
		titleSub = "Soldier PDA and framework";
		textSub = "The mod includes a PDA item that can be accessed through ace self interactions >> equipment if the player has the pda in their inventory.<br/><br/>Access to personal data, map and team roster <br/>Default tabs in the PDA include player self intel,a map (can be disabled) and a team roster.<br/><br/>Stopwatch, alarm and timer functionalities <br/>The PDA has an alarm app that allows players to set an alarm or a countdown timer and includes a stopwatch feature.<br/><br/>Possibility to send, receive and collect data and pictures. <br/>From your mission description.ext you can predefine data and pictures that can be added to the tab's gallery app or to the tab's data app. Each data or picture can be given separately and therefore discovered mid game. (2 functions are included that do just that). Data can be shared and transferred between players if they are within a ten meters radius of each other.";
		};
				class subEntry11
		{
		titleSub = "Fiberscope Item";
		textSub = "The mod includes a fiberscope item that allows equipped player to look under doors (ACE self interaction >> equipment). It only works if you are next to a door or a window.";
		};
						class subEntry12
		{
		titleSub = "The mod includes a fiberscope item that allows equipped player to look under doors (ACE self interaction >> equipment). It only works if you are next to a door or a window.";
		textSub = "The mod includes a function to turn any object into a vehicle spawner, you can select what type of vehicles (see, land, air, all of them) the spawner will allow you to spawn. Mission makers and admins can decide which mods/ dlcs and factions are available from the spawner. The spawner works fine with vanilla assets, RHS, CUP and PROJECT OPFOR vehicles, some vehicles from other mod might not be listed properly depending on the mod's config files.";
		};
		class subEntry13
		{
		titleSub = "Play ambient radio chatter from a radio prop ";
		textSub = "The mod includes a function to turn any object (but preferably a radio prop) into a random radio chatter player. The radio can be turned on and off (ACE interaction) effects are global and the same chatter is played on every machine. By default I have included a US military radio chatter channel (with samples taken from the excellent TV show Generation Kill) but you can create your own channel with custom sounds either from the mission's description or by packing them into a custom addon (if you do so, please share!).";
		};
		class subEntry14
		{
		titleSub = "Customized map markers ";
		textSub = "I have also included a shit ton of customized map markers all of them are available to mission makers, and some of them (not all, so has not to overcrowd the icons tab) to the players.";
		};
		class subEntry15
		{
		titleSub = "Hacking and downloading tool";
		textSub = "hacking tool object is included, you can still disable a CBA option if you want to allow players to perform hacks and data download without the item in their inventory.<br/><br/>Hacking and downloading tool item <br/><br/>Two functions are included to make objects hackable, while hacking or downloading content players can still move but they have to stay within range of the objects.<br/><br/><br/><br/><br/><br/>";
		};
		class subEntry16
		{
		titleSub = "Miscellaneous functions for mission makers";
		textSub = "In addition the mod includes several functions designed to make mission maker's life easier:<br/>Elevator simulation<br/>Timer<br/>Check when all alive players are on board a vehicle<br/>Automatically fill given ammo crate with ammo fitting the player's weapons<br/>Automatically refill ammo crate with infinite ammo/ items<br/>Remove unit's nvg (regardless of the mod they come from)<br/>Remove ACRE2 radios<br/>Search object/ person function<br/>ACE3 simple conversation interaction<br/>MP compatible sit unit on chair with release condition<br/>Splashscreen with customizable image<br/>Static line parachute jump<br/>Travel time ETA<br/>HVT capture and surrendering function<br/>";
		};
	};
	/*
			class dataEntry9
	{
	title = "Mission: save your ass";
	text = "If you accept this mission please read the subentries";

	};
			class dataEntry8
	{
	title = "Mission: save your ass";
	text = "If you accept this mission please read the subentries";
		class subEntry1
		{
		titleSub = "part 1: save";
		textSub = "run!";
		};
		
		class subEntry2
		{
		titleSub = "Part 2 your arse";
		textSub = "hide!";
		};
				class subEntry3
		{
		titleSub = "Part 2 your arse";
		textSub = "hide!";
		};
				class subEntry4
		{
		titleSub = "Part 2 your arse";
		textSub = "hide!";
		};
	};
	*/
};