#ifndef GUARD_HEADER_PLAYER_BELONGINGS
#define GUARD_HEADER_PLAYER_BELONGINGS

#include<iostream>

class PlayerBelongings
{
private:
	bool isTaken = false;  
	bool isFound = false;
public:
	PlayerBelongings()
	{

	}
	virtual void PrintUseMessage() = 0;
};

class Gown : public PlayerBelongings
{
private:
	bool isOpened = false;
public:
	 void PrintUseMessage()
	{
		std::cout << "Works";
	}
};

class Screwdriver : public PlayerBelongings
{
public:
	void PrintUseMessage()
	{
		std::cout << "Works";
	}
};

class Toothbrush : public PlayerBelongings
{
public:
	void PrintUseMessage()
	{
		std::cout << "Works";
	}
};

class Phone : public PlayerBelongings
{
private:
	bool isUsed = false;
public:
	void PrintUseMessage()
	{
		std::cout << "Works";
	}
	void IsUsed() 
	{
		isUsed = true;
	}
};

class Mail : public PlayerBelongings
{
private:
	bool isRead = false;
public:
	void PrintUseMessage()
	{
		std::cout << "Works";
	}
};

class Lamp : public PlayerBelongings
{
private:
	bool isOn = false;
public:
	Lamp() : PlayerBelongings()
	{

	}
	void PrintUseMessage()
	{
		std::cout << "Works1";
	}

};

class Door : public PlayerBelongings
{
private:
	bool isUsed = false;
public:
	void PrintUseMessage()
	{
		std::cout << "Works";
	}
};

class Analgesic : public PlayerBelongings
{
private:
	bool isUsed = false;
public:
	void PrintUseMessage()
	{
		 std::cout << "Works";
	}

	bool IsUsed()
	{
		return isUsed;
	}

	void Used()
	{
		isUsed = true;
	}
};


#endif