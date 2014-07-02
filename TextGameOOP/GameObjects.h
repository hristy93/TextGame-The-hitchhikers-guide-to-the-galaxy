#ifndef GUARD_HEADER_GAME_OBJECTS
#define GUARD_HEADER_GAME_OBJECTS

#include "PlayerBelongings.h"

class GameObjects
{
protected:
	Gown* gown = new Gown;
	Toothbrush* toothbrush = new Toothbrush;
	Phone* phone = new Phone;
	Screwdriver* screwdriver = new Screwdriver;
	Door* door = new Door;
	Lamp* lamp = new Lamp;
	Analgesic* analgesic = new Analgesic;
public:
	GameObjects()
	{

	}

	~GameObjects()
	{
		std::cout << "Destruct" << std::endl;
		delete gown;
		delete toothbrush;
		delete phone;
		delete screwdriver;
		delete door;
		delete lamp;
		delete analgesic;
	}
};

#endif