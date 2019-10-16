#ifndef GAME2_H
#define GAME2_H

#include <vector>
#include "GameCharacter.h"
#include "Player.h"
#include "Enemy.h"
#include "Grid.h"
#include <iostream>
#include <string>

using namespace std;

class Game2
{
public:
	Game2();
	void init();
	void playGame();
	void renderStats();
	void update();
	void battle();
	void clean();

private:
	int numEnemies; //use this to decide how many enemies you want to spawn
	vector<GameCharacter> characterList;
};

#endif GAME2_H
