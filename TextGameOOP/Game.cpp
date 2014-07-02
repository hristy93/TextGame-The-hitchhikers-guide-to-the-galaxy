#include <iostream>
#include <string>
#include <ctype.h>
#include <Windows.h>
#include <mmsystem.h>
#include "Game.h"
#include "Message.h"
#include "Player.h"
#include "Option.h"


using namespace std;

void PlayerActions(string optionName, string optionAdditionalInfo, Player& player, Gown* gown, bool& finished, bool& ended)
{
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
			finished = true;
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
		ended = true;
		//messageNum = "1-2-3-2-2-3-2-2-2-2-1"
	}

	if (optionName == "TalkTo")
	{
		if (optionAdditionalInfo == "MrProsser")
		{
			player.TalkTo("MrProsser");
			ended = true;
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

	if (optionName == "DieFrom")
	{
		player.DieFrom(optionAdditionalInfo);
		ended = true;
		//messageNum = "1-2-1";
	}
}

void ObjectActions(string optionName, string optionAdditionalInfo, Player& player, Door* door, Lamp* lamp,
	Gown* gown, Toothbrush* toothbrush, Phone* phone, Analgesic* analgesic, Screwdriver* screwdriver, bool& ended)
{
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

	if (optionName == "OpenObject")
	{
		if (optionAdditionalInfo == "Gown")
		{
			player.OpenObject(gown);
			//messageNum = "1-2-3-2";
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

	if (optionName == "PlayWith")
	{
		if (optionAdditionalInfo == "PocketFluff")
		{
			player.PlayWith("PocketFluff");
			ended = true;
			//messageNum = "1-2-3-3";
		}
	}
}

void Game::Run()
{
	PlaySound(TEXT("song.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Player player;
	string optionNum = "1";
	string messageNum = "";
	string choiceLimit;
	string choice;
	this->ended = false;
	this->finished = false;
	player.WakeUp();
	while (!ended && !finished)
	{
		choiceLimit = Message::optionCount;
		do
		{
			getline(cin, choice);
		} while (choice < "1" || choice > choiceLimit || choice.size() >= 2);
		string ch = choice;
		optionNum = Option::lastOption;
		optionNum += "-";
		optionNum += ch;

		Option option(optionNum);
		option.ChooseOption();
		string optionName = option.GetOptionName();
		string optionAdditionalInfo = option.GetOptionAdditionalInfo();

		ObjectActions(optionName, optionAdditionalInfo, player, door, lamp,
			gown, toothbrush, phone, analgesic, screwdriver, this->ended);

		PlayerActions(optionName, optionAdditionalInfo, player,
			gown, this->finished, this->ended);

		RestartOrExit(ended, finished);
	}
}

void Game::RestartOrExit(bool ended, bool finished)
{
	if (ended || finished)
	{
		string result;
		do
		{
			getline(cin, result);
		} while (result != "1" && result != "2");
		if (result == "1")
		{
			system("cls");
			Game::Run();
		}
	}
}

int main()
{
	PlaySound(TEXT("song.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Game game;
	game.Run();
	return 0;
}