#include "Player.h"
#include "Message.h"
#include "Game.h"
#include <typeinfo>

void Player::WakeUp()
{
	std::string messageNum = "1";
	Message msg(messageNum);
	msg.ShowMessage();
}

void Player::DieFrom(std::string something)
{
	if (something == "Laziness")
	{
		Message msg("1-1");
		msg.ShowMessage();
	}
	if (something == "RefusingToGoOutside")
	{
		Message msg("1-2-3-2-2-3-2-1");
		msg.ShowMessage();
	}
	if (something == "Lingering")
	{
		Message msg("1-2-3-2-2-3-2-2-1");
		msg.ShowMessage();
	}
	if (something == "FlyingBrick_1")
	{
		Message msg("1-2-3-2-2-3-2-2-2-1");
		msg.ShowMessage();
	}
	if (something == "FlyingBrick_2")
	{
		Message msg("1-2-3-2-2-3-2-2-2-2-1");
		msg.ShowMessage();
	}
	if (something == "NotDoingWhatIsRight")
	{
		Message msg("1-2-3-1-1");
		msg.ShowMessage();
	}
	
}

void Player::StandUp()
{
	/*Message msg("1-2-3-2-2-3-2-2-2-2-1");
	msg.ShowMessage();*/
	Player::DieFrom("FlyingBrick_2");
}

void Player::UseObject(PlayerBelongings* object)
{
	std::string objectType = typeid(*object).name();

	if (objectType == "class Door")
	{
		Message msg("1-2-3-2-2-3-2");
		msg.ShowMessage();
	}
	if (objectType == "class Lamp")
	{
		Message msg("1-2");
		msg.ShowMessage();
	}
	if (objectType == "class Phone")
	{
		phone->IsUsed();
		if (analgesic->IsUsed())
		{
			Message msg("1-2-3-2-2-3");
			msg.ShowMessage();
		}
		else
		{
			Message msg("1-2-4");
			msg.ShowMessage();
		}
		
	}
	if (objectType == "class Analgesic")
	{
		analgesic->Used();
		Message msg("1-2-3-2-2");
		msg.ShowMessage();
	}
}

void Player::OpenObject(PlayerBelongings* object)
{
	std::string objectType = typeid(*object).name();

	if (objectType == "class Gown")
	{
		Message msg("1-2-3-2");
		msg.ShowMessage();
	}
}

void Player::GoToObject(PlayerBelongings* object)
{
	std::string objectType = typeid(*object).name();

	if (objectType == "class Toothbrush")
	{

		Message msg("1-2-1");
		msg.ShowMessage();
	}
	if (objectType == "class Screwdriver")
	{
		Message msg("1-2-2");
		msg.ShowMessage();
	}
	if (objectType == "class Gown")
	{
		Message msg("1-2-3");
		msg.ShowMessage();
	}
}

void Player::TakeObject(PlayerBelongings* object)
{
	std::string objectType = typeid(*object).name();
	AddToInventory(object);
	if (objectType == "class Toothbrush")
	{
		Message msg("1-2-3-2-2-1");
		msg.ShowMessage();
		
	}
	if (objectType == "class Screwdriver")
	{
		Message msg("1-2-3-2-2-2");
		msg.ShowMessage();
	}
}

//ima o6te da se opravq !!!
void Player::GoOutside()
{
	Message msg("1-2-3-2-2-3-2-2");
	msg.ShowMessage();
}

void Player::LookOutside()
{
	Message msg("1-2-3-2-2-3-1");
	msg.ShowMessage();
}

void Player::RememberedAbout(PlayerBelongings* object)
{
	std::string objectType = typeid(*object).name();

	if (objectType == "class Gown")
	{
		Message msg("1-2-3-1");
		msg.ShowMessage();
	}
}

void Player::PlayWith(std::string something)
{
	if (something == "PocketFluff")
	{
		/*Message msg("1-2-3-1-1");
		msg.ShowMessage();*/
		Player::DieFrom("NotDoingWhatIsRight");
	}
}

void Player::TalkTo(std::string personsName)
{
	if (personsName == "MrProsser")
	{
		/*Message msg("1-2-3-2-2-3-2-2-2-1");
		msg.ShowMessage();*/
		Player::DieFrom("FlyingBrick_1");
	}
}

void Player::RunTo(std::string something)
{
	if (something == "Bulldozer")
	{
		Message msg("1-2-3-2-2-3-2-2-2");
		msg.ShowMessage();
	}
}

void Player::HopeFor(std::string something)
{
	if (something == "Miracle")
	{
		Message msg("1-2-3-2-2-3-2-2-2-2-2");
		msg.ShowMessage();
	}
}


void Player::Stop(std::string something)
{
	if (something == "Bulldozer")
	{
		Message msg("1-2-3-2-2-3-2-2-2-2");
		msg.ShowMessage();
	}
}

void Player::AddToInventory(PlayerBelongings* object)
{
	this->inventory.push_back(object);
}
