#ifndef GUARD_HEADER_PLAYER
#define GUARD_HEADER_PLAYER

#include <iostream>
#include <vector>
#include <string>
#include "PlayerBelongings.h"
#include "GameObjects.h"

class Player : public GameObjects
{
public:
	Player()
	{

	}
	void StandUp();
	void WakeUp();
	void GoOutside();
	void LookOutside();
	void RememberedAbout(PlayerBelongings* object);
	void PlayWith(std::string something);
	void TalkTo(std::string personsName);
	void RunTo(std::string something);
	void RunTo(PlayerBelongings* object);
	void HopeFor(std::string something);
	void DieFrom(std::string something);
	void Stop(std::string something);
	void OpenObject(PlayerBelongings* object);
	void GoToObject(PlayerBelongings* object);
	void TakeObject(PlayerBelongings* object);
	void UseObject(PlayerBelongings* object);
	void AddToInventory(PlayerBelongings* object);
	
private:
	/*bool isDrunk = true;
	bool isInTheHouse = true;
	bool willDie = false;
	bool hasReadTheMail = false;
	bool hasTalkedToTheCouncil = false;
	bool knowsAboutTheBulldozer = false;
	bool isScaredOfDying = false;*/
	std::vector<PlayerBelongings*> inventory;
};

#endif
