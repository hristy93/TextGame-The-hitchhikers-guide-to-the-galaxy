#ifndef GUARD_HEADER_PLAYER_BELONGINGS
#define GUARD_HEADER_PLAYER_BELONGINGS

#include<iostream>

class PlayerBelongings
{
protected:
	bool isTaken = false;  
	bool isFound = false;
public:
	PlayerBelongings()
	{

	}
	void Taken()
	{
		isTaken = true;
	}
	bool IsTaken()
	{
		return isTaken;
	}
	void Found()
	{
		isFound = true;
	}
	bool IsFound()
	{
		return isFound;
	}
	virtual void PrintUseMessage() = 0;
};

class Gown : public PlayerBelongings
{
private:
	bool isOpened = false;
public:
	void Opened()
	{
		isOpened = true;
	}
	bool IsOpened()
	{
		return isOpened;
	}
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
	void Used() 
	{
		isUsed = true;
	}
	bool IsUsed()
	{
		return isUsed;
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
	void Read()
	{
		isRead = true;
	}
	bool IsRead()
	{
		return isRead;
	}
};

class Lamp : public PlayerBelongings
{
private:
	bool isOn = false;
public:
	void PrintUseMessage()
	{
		std::cout << "Works1";
	}
	void On()
	{
		isOn = true;
	}
	bool IsOn()
	{
		return isOn;
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
	void Used()
	{
		isUsed = true;
	}
	bool IsUsed()
	{
		return isUsed;
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