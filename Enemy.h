#ifndef ENEMY_H
#define ENEMY_H

#include "GameCharacter.h"
#include <iostream>
#include <string>

using namespace std;

class Enemy : public GameCharacter
{
public:
	Enemy();
	void updateEnemy(int direction, int x, int y);
	string randomName();

private:
};

#endif ENEMY_H