#include <iostream>
#include <string>
#include "Message.h"
using namespace std;

Message::Message(std::string messageNum)
{
	this->messageNum = messageNum;
	Option::lastOption = messageNum;
}

void Message::ShowMessage()
{
	//std::string endingMessage[6] = { "1-1", "1-2-3-2-2-3-2-1",
	//	"1-2-3-2-2-3-2-2-1", "1-2-3-2-2-3-2-2-2-1", "1-2-3-2-2-3-2-2-2-2-1" };
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
	/*for (int i = 0; i < 5; i++)
	{
	if (this->messageNum == endingMessage[i])
	isEndingMessage = true;
	}*/
}