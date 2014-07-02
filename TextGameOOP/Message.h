#ifndef GUARD_HEADER_MESSAGE 
#define GUARD_HEADER_MESSAGE

#include<iostream>
#include <fstream>
#include <conio.h>
#include "Option.h"
#include <string>

class Message
{
private:
	std::string messageNum;
public:
	Message(std::string messageNum);
	void ShowMessage();
	static char optionCount;
};

#endif