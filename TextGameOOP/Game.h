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
		//code
	}
	//void ShowMessage(std::string messageNum);
	void Run();
	void RestartOrExit(bool ended, bool finished);


	/*static Gown* gown ;
	static Toothbrush* toothbrush;
	static Phone* phone;
	static Screwdriver* screwdriver;
	static Door* door;
	static Lamp* lamp;
	static Analgesic* analgesic;*/
	//void ShowOption();
	//void Restart();
};

//class Bulldozer
//{
//private:
//	bool isFound = false;
//public:
//	class Bulldozer();
//};
//


#endif