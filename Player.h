#ifndef PLAYER_H
#define PLAYER_H

#include "GameCharacter.h"
#include <iostream>
#include <string>

using namespace std;

class Player : public GameCharacter
{
public:
	Player();
	void updatePlayer(int x, int y);

private:
	int newX;
	int newY;
};

#endif PLAYER_H