//Template
/*
class cfgMRHFactionSounds //Do not Change
{
	class YourRadioStation // this will be passed to the function to tell it what radio station to play
	{
	allSounds[] = {}; // list sound classnames here between "" and separated by ,
	};
};
class cfgSounds //Arma 3 default cfgSounds 
{
		class YourSoundsClassName // Sound classname as listed above
	{

	name     = "YourSoundsName"; //Name for your sound, standard arma 3 cfg sounds entry
	sound[]  = {"\PathToYourSound", 15, 1, 100}; //standard arma cfg sounds
	titles[] = {};
	soundLength = 10; //Length of your sound in seconds added for the radio chatter module, mandatory

	};
};
*/
//Example
class cfgMRHFactionSounds 
{
	class DemoRussian 
	{
	allSounds[] = {"MRH_DEMO_Russian1","MRH_DEMO_Russian2","MRH_DEMO_Russian3"}; 
	};
};
class cfgSounds 
{
		class MRH_DEMO_Russian1
	{

	name     = "MRH_DEMO_Russian1"; 
	sound[]  = {"\RussianChatter\MRH_DEMO_Russian1.ogg", 15, 1, 100};
	titles[] = {};
	soundLength = 39; 

	};
		class MRH_DEMO_Russian2 
	{

	name     = "MRH_DEMO_Russian2"; 
	sound[]  = {"\RussianChatter\MRH_DEMO_Russian2.ogg", 15, 1, 100};
	titles[] = {};
	soundLength = 25; 

	};
		class MRH_DEMO_Russian3 
	{

	name     = "MRH_DEMO_Russian3"; 
	sound[]  = {"\RussianChatter\MRH_DEMO_Russian3.ogg", 15, 1, 100};
	titles[] = {};
	soundLength = 36; 

	};
};