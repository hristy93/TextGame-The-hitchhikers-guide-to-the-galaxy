#ifndef GUARD_HEADER_GAME_OBJECTS
#define GUARD_HEADER_GAME_OBJECTS

#include "PlayerBelongings.h"

class GameObjects
{
protected:
	Gown* gown = new Gown;
	Toothbrush* toothbrush = new Toothbrush;
	Phone* phone= new Phone;
	Screwdriver* screwdriver=new Screwdriver;
	Door* door =new Door;
	Lamp* lamp = new Lamp;
	Analgesic* analgesic= new Analgesic;
};

#endif