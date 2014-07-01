#include <iostream>
#include <string>
#include<consoleapi.h>
#include "Message.h"
using namespace std;

char Message::optionCount = ' ';

Message::Message(std::string messageNum)
{
	this->messageNum = messageNum;
	Option::lastOption = messageNum;
}

int GetBufferWidth()
{
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	int bufferWidth, result;

	result = GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &bufferInfo);

	if (result)
	{
		bufferWidth = bufferInfo.dwSize.X;
	}

	return bufferWidth;
}

void OutputText(std::string s)
{
	int bufferWidth = GetBufferWidth();

	for (unsigned int i = 1; i <= s.length(); i++)
	{
		char c = s[i - 1];

		int spaceCount = 0;

		// Add whitespace if newline detected.
		if (c == '\n')
		{
			int charNumOnLine = ((i) % bufferWidth);
			spaceCount = bufferWidth - charNumOnLine;
			s.insert((i - 1), (spaceCount), ' ');
			i += (spaceCount);
			continue;
		}

		if ((i % bufferWidth) == 0)
		{
			if (c != ' ')
			{
				for (int j = (i - 1); j > -1; j--)
				{
					if (s[j] == ' ')
					{
						s.insert(j, spaceCount, ' ');
						break;
					}
					else spaceCount++;
				}
			}
		}
	}

	// Output string to console
	std::cout << s << std::endl;
}

void Message::ShowMessage()
{
	//std::string endingMessage[6] = { "1-1", "1-2-3-2-2-3-2-1",
	//	"1-2-3-2-2-3-2-2-1", "1-2-3-2-2-3-2-2-2-1", "1-2-3-2-2-3-2-2-2-2-1" };
	std::string line;
	bool toPrint = false;
	int optionIntCount = 0;
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
			OutputText(line);
			//std::cout << line << std::endl;
			if (line.find("(") != std::string::npos)
			{
				optionIntCount++;
			}
		}
		if (line == this->messageNum)
		{
			toPrint = true;
		}
	}
	optionCount = '0' + optionIntCount;
	/*for (int i = 0; i < 5; i++)
	{
	if (this->messageNum == endingMessage[i])
	isEndingMessage = true;
	}*/
}