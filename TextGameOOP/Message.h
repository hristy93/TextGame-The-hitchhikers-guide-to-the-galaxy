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
	bool isEndingMessage = false;
	//Message** nextMessage;
public:
	Message(std::string messageNum)
	{
		this->messageNum = messageNum;
		Option::lastOption = messageNum;
	}

	//std::string GetMessageNum() const
	//{
	//	return this->messageNum;
	//}

	void ShowMessage()
	{
		std::string endingMessage[6] = { "1-1", "1-2-3-2-2-3-2-1",
			"1-2-3-2-2-3-2-2-1", "1-2-3-2-2-3-2-2-2-1", "1-2-3-2-2-3-2-2-2-2-1" };
		std::string line;
		bool toPrint = false;
		std::ifstream myfile("messages.txt");
		//system("CLS");
		myfile.seekg(std::ios::beg);
		std::cout << "messageNum: " << this->messageNum << std::endl;
		while (getline(myfile, line))
		{
			if (line == this->messageNum + '#')
			{
				toPrint = false;
				break;
			}
			if (toPrint)
			{
				std::cout << line << std::endl;
			}
			if (line == this->messageNum)
			{
				toPrint = true;
			}
		}
		for (int i = 0; i < 5; i++)
		{
			if (this->messageNum == endingMessage[i])
				isEndingMessage = true;
		}
	}

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