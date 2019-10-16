#include "Game.h"
#include "Grid.h"
#include "Player.h"
#include "Enemy.h"
#include "GameCharacter.h"
#include <iostream>
#include <string>

using namespace std;

Game::Game()
{
	int numEnemies;
	render();
	update();
	battle();
	stats();
	clean();

}

void Game::playGame()
{
	render();
	update();
	battle();
	stats();
	clean();
}

void Game::init()
{
	numEnemies = 0;

	cout << "Enter how many enemies you want to add: " << endl;
	cin >> numEnemies;
	
	player.spawn("Player", player.getTypeID(), 170, (rand() % 3) + 1, rand() % 12, rand() % 12);
	lpGameCharacters.push_back(player);
	
	for (int i = 0; i < numEnemies; i++)
	{
		enemy.spawn(enemy.randomName(), to_string(i), 170, (rand() % 3) + 1, rand() % 12, rand() % 12);
		lpGameCharacters.push_back(enemy);
	}
}



void Game::render()
{
	player.render();

	for (int i = 0; i < lpGameCharacters.size(); i++)
	{
		cout << "Renderding all remaining characters" << endl;
		enemy.render();
	}
}

void Game::update()
{
	player.update();

	for (int i = 0; i < lpGameCharacters.size(); i++)
	{
		cout << "Updating all remaining characters" << endl;
		enemy.update();
	}
}

void Game::battle()
{
	for (int i = 0; i < lpGameCharacters.size(); i++)
	{
		//check with all other characters in list, if same spot then fight
	}
}

void Game::stats()
{
	for (int i = 0; i < lpGameCharacters.size(); i++)
	{
		cout << "Stats of all remaining Characters: " << endl;
		gameCharacter.stats();
	}
}

void Game::clean()
{
	grid.clearGrid();
	grid.updateGrid(//getPlyerType, getPlayerX, getPlayerY);
	//make for loop to go through list of characters and update grid each time
	grid.updateGrid(//getEnemyType, getEnemyX, getEnemyY);
}