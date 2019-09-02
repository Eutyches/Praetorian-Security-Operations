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
//[entry,titleEntry,titleData[subs[dataTitle,dataSub]]]
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
	

};