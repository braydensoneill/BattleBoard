#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include "GameCharacter.h"

using namespace std;

class Enemy : public GameCharacter
{
public:
	Enemy();
	void Difficulty() const;

private:
	int m_Difficulty;
};

#endif ENEMY_H