#include "Option.h"
#include <string>

std::string Option::lastOption = "1";

Option::Option(std::string optionNum)
{
	this->optionNum = optionNum;
	lastOption = optionNum;
}

void Option::ChooseOption()
{
	std::string line;
	bool toRead = false;
	bool haveSpecifier = false;
	std::ifstream myfile("options.txt");
	std::string stopMarker = this->optionNum + '#';
	myfile.seekg(std::ios::beg);
	while (getline(myfile, line))
	{
		if (line == stopMarker)
		{
			toRead = false;
			break;
		}
		if (toRead)
		{
			int i = line.find("-");
			if (i != std::string::npos)
			{
				haveSpecifier = true;
				this->optionName = line.substr(0, i);
				this->optionAdditionalInfo = line.substr(i + 1, line.size());
			}
			if (!haveSpecifier)
			{
				this->optionName = line;
			}
		}
		if (line == this->optionNum)
		{
			toRead = true;
		}
	}
}