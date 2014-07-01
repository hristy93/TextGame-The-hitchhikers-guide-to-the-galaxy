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
	//bool isEndingMessage = false;
	//Message** nextMessage;
public:
	Message(std::string messageNum);
	void ShowMessage();
	static char optionCount;

	//std::string GetMessageNum() const
	//{
	//	return this->messageNum;
	//}

	//Message(std::string message, int numOfNewMessages)
	//{
	//	this->message = message;
	//	this->numOfNewMessages = numOfNewMessages;
	//}
	//void ShowMessage()
	//{
	//	int choice;
	//	std::cout << this->message << std::endl;
	//	std::cin >> choice;
	//	//this->nextMessage[choice]->PrintMessage();
	//}
	/*void PrintNextMessage()
	{
		this->nextMessage[choice]->PrintMessage();
	}*/
};

#endif