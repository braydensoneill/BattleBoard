#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameCharacter.h"
#include "Player.h"
#include "Enemy.h"
#include "Grid.h"
#include <iostream>
#include <string>

using namespace std;

class Game
{
public:
	Game();
	void init();
	void playGame();
	void render();
	void update();
	void battle();
	void stats();
	void clean();

private:
	int numEnemies; //use this to decide how many enemies you want to spawn
};

#endif
