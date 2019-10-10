#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "GameCharacter.h"

using namespace std;

class Player : public GameCharacter
{
public:
	Player();
	void Level() const;

private:
	int m_Level;
};

#endif PLAYER_H