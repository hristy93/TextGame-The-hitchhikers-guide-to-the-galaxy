#include <iostream>
#include <string>
#include "Game.h"
//#include "PlayerBelongings.h"
//#include "Message.h"
#include "Player.h"
#include "Option.h"

using namespace std;

void Game::Run()
{
	/*Gown* gown= new Gown;
	Toothbrush* toothbrush = new Toothbrush;
	Phone* phone= new Phone;
	Screwdriver* screwdriver=new Screwdriver;
	Door* door =new Door;
	Lamp* lamp = new Lamp;
	Analgesic* analgesic= new Analgesic;*/

	/*Game::gown = new Gown;
	Game::toothbrush = new Toothbrush;
	Game::phone = new Phone;
	Game::screwdriver = new Screwdriver;
	Game::door = new Door;
	Game::lamp = new Lamp;
	Game::analgesic = new Analgesic;*/

	Player player;
	int choice;
	string optionNum = "1";
	string messageNum = "";
	player.WakeUp();
	while (!ended)
	{
		cin >> choice;
		char ch = '0' + choice;
		optionNum = Option::lastOption;
		optionNum += "-";
		optionNum += ch;
		Option option(optionNum);
		option.ChooseOption();
		string optionName = option.GetOptionName();
		string optionAdditionalInfo = option.GetOptionAdditionalInfo();
		if (optionName == "UseObject")
		{
			if (optionAdditionalInfo == "Door")
			{
				player.UseObject(door);
				//messageNum = "1-2-3-2-2-3-2";
			}
			if (optionAdditionalInfo == "Lamp")
			{
				player.UseObject(lamp);
				//messageNum = "1-2";
			}
			if (optionAdditionalInfo == "Phone")
			{
				player.UseObject(phone);
				//messageNum = "1-2-4";
			}
			if (optionAdditionalInfo == "Analgesic")
			{
				player.UseObject(analgesic);
				//messageNum = "1-2-3-2-2";
			}

		}

		if (optionName == "GoToObject")
		{
			if (optionAdditionalInfo == "Toothbrush")
			{
				player.GoToObject(toothbrush);
				//messageNum = "1-2-1";
			}
			if (optionAdditionalInfo == "Screwdriver")
			{
				player.GoToObject(screwdriver);
				//messageNum = "1-2-2";
			}
			if (optionAdditionalInfo == "Gown")
			{
				player.GoToObject(gown);
				//messageNum = "1-2-3";
			}
		}

		if (optionName == "TakeObject")
		{
			if (optionAdditionalInfo == "Toothbrush")
			{
				player.TakeObject(toothbrush);
				//messageNum = "1-2-3-2-2-1";
			}
			if (optionAdditionalInfo == "Screwdriver")
			{
				player.TakeObject(screwdriver);
				//messageNum = "1-2-3-2-2-2";
			}
		}

		if (optionName == "RememberedAbout")
		{
			if (optionAdditionalInfo == "Gown")
			{
				player.RememberedAbout(gown);
				//messageNum = "1-2-1";
			}
		}

		if (optionName == "Stop")
		{
			if (optionAdditionalInfo == "Bulldozer")
			{
				player.Stop("Bulldozer");
				//messageNum = "1-2-3-2-2-3-2-2-2-2";
			}
		}

		if (optionName == "HopeFor")
		{
			if (optionAdditionalInfo == "Miracle")
			{
				player.HopeFor("Miracle");
				//messageNum = "1-2-3-2-2-3-2-2-2-2-2";
			}
		}

		if (optionName == "GoOutside")
		{
			player.GoOutside();
			//messageNum = "1-2-3-2-2-3-2";
		}

		if (optionName == "LookOutside")
		{
			player.LookOutside();
			//messageNum = "1-2-3-2-2-3-2";
		}

		if (optionName == "StandUp")
		{
			player.StandUp();
			//messageNum = "1-2-3-2-2-3-2-2-2-2-1"
		}

		if (optionName == "TalkTo")
		{
			if (optionAdditionalInfo == "MrProsser")
			{
				player.TalkTo("MrProsser");
				//messageNum = "1-2-1";
			}
		}

		if (optionName == "RunTo")
		{
			if (optionAdditionalInfo == "Bulldozer")
			{
				player.RunTo("Bulldozer");
				//messageNum = "1-2-3-2-2-3-2-2-2";
			}
		}

		//!!! da go opravq za otdelnite slu4ai
		if (optionName == "DieFrom")
		{
			player.DieFrom(optionAdditionalInfo);
			this->ended = true;
			//messageNum = "1-2-1";
		}

		if (optionName == "OpenObject")
		{
			if (optionAdditionalInfo == "Gown")
			{
				player.OpenObject(gown);
				//messageNum = "1-2-3-2";
			}
		}

		if (optionName == "PlayWith")
		{
			if (optionAdditionalInfo == "PocketFluff")
			{
				player.PlayWith("PocketFluff");
				//messageNum = "1-2-3-3";
			}
		}
	}




	/*int choice;
	string messageNum = "1";
	while (!this->ended)
	{
		if (messageNum == "1")
			this->ShowMessage(messageNum);
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			messageNum += "-1";
			this->ShowMessage(messageNum);
			break;
		}
		case 2:
		{
			messageNum += "-2";
			this->ShowMessage(messageNum);
			break;
		}
		case 3:
		{
			messageNum += "-3";
			this->ShowMessage(messageNum);
			break;
		}
		case 4:
		{
			messageNum += "-4";
			this->ShowMessage(messageNum);
			break;
		}
		}
	}
*/

	/*Message msg1("1-0");
	msg1.ShowMessage()*/
	/*cout << "You wake up. The room is spinning very gently round your head. Or at least it "
	<< endl << "would be if you could see it which you can't." << endl << "It is pitch black." << endl;
	cout << "(1) Bump into everything and kill yourself" << endl;
	cout << "(2) Turn on the lights" << endl;*/

	/*Message msg1(str, 2);
	Message msg1_1("You can't stay in bed all day, so you stand up very slowly. Unfortunately you hit your head on the washbasin while you stagger to your feet. Poor guy, you should’ve turn on the lights.\nAstoundingly, a bulldozer pokes through your wall. However, you have no time for surprise because the ceiling is collapsing on you as your home is unexpectedly demolished to make way for a new bypass. You are seriously injured in the process, but on your way to the hospital a fleet of Vogon Constructor ships unexpectedly arrives and demolishes the Earth to make way for a new hyperspace bypass.\nBetter luck next life." , 0);
	Message msg1_2("The bedroom is a mess.\nIt is a small bedroom with a faded carpet and old wallpaper.There is a washbasin, a chair with a tatty dressing gown slung over it, and a window with the curtains drawn.Near the exit leading is a phone.There is a flathead screwdriver (outside the bed) and a toothbrush (outside the bed).\n(1)Stand up and get the toothbrush.\n(2)•	Stand up and get the flathead screwdriver.\n(3)Stand up and get the gown.\n(4)•	Stand up and use the phone.\n", 2);
	msg1.PrintMessage();*/

	//string str = "You wake up. The room is spinning very gently round your head. Or at least it would be if you could see it which you can't.It is pitch black.\n(1) Bump into everything and kill yourself.\n(2) Turn on the lights";
	//cout << str << endl;

	/*if (this->ended)
	return;*/
}


int main()
{
	Game game;
	game.Run();
	int a;
	cin >> a;
	return 0;

}