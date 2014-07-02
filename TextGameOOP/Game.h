#ifndef GUARD_HEADER_TEMPLATES
#define GUARD_HEADER_TEMPLATES

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "GameObjects.h"

class Game : public GameObjects
{
private:
	bool ended = false;
	bool finished = false;
public:
	Game() 
	{

	}
	void Run();
	void RestartOrExit(bool ended, bool finished);
};

#endif