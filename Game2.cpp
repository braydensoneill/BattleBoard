#include "Game2.h"
#include "Grid.h"
#include "Player.h"
#include "Enemy.h"
#include "GameCharacter.h"
#include <iostream>
#include <string>
#include <windows.h>	//this is used for the Sleep() function
#include <ctime>	//this is used for the Sleep() function
#include "conio.h" //this is used to change text collour

using namespace std;

Player player;
Enemy enemy;
Grid grid;

Game2::Game2()
{
	int numEnemies = 0;
	vector<GameCharacter> characterList;
}

void Game2::playGame()
{
	system("color 0A");	//change the text colour to green
	init();
	cout << endl;
	cout << "Placing all Players on the grid";
	for (int i = 0; i < 4; i++)
	{
		Sleep(750);
		cout << ".";
	}

	grid.makeGrid();
	for (int i = 0; i < characterList.size(); i++)
	{
		grid.updateGrid(characterList[i].getTypeID(), characterList[i].getMX(), characterList[i].getMY());
	}

	for (int i = 1; i < 21; i++)	//if the game exceeds 20 rounds, you lose
	{
		if (system("CLS")) system("clear");	//clear the terminal

		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		cout << "Round " << i << "/20" << endl;
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		
		grid.printGrid();

		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;

		cout << "Characters currently on the board: " << endl;
		renderStats();

		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;

		update();
	}

	renderStats();
}

void Game2::init()	//create all of the GameCharacters
{
	cout << "Enter how many enemies you want to be in your game: " << endl;
	cin >> numEnemies;
	cout << endl;

	player.spawn("Player One", "P", 170, (rand() % 3) + 1, rand() % 12, rand() % 12);
	characterList.push_back(player);

	for (int i = 1; i <= numEnemies; i++)	//dont start at 0 because Player will be 0 in the list. This will avoid confusion
	{
		enemy.spawn(enemy.randomName(), to_string(i), 170, (rand() % 3) + 1, rand() % 12, rand() % 12);
		characterList.push_back(enemy);
	}
}

void Game2::renderStats()
{
	for (int i = 0; i < characterList.size(); i++)
	{
		characterList[i].render();
		characterList[i].stats();
	}
}

void Game2::update()
{
	grid.removeFromGrid(player.getMX(), player.getMY());
	player.updatePlayer(player.getMX(), player.getMY());
	grid.updateGrid(player.getTypeID(), player.getMX(), player.getMY());

	for (int i = 1; i < characterList.size(); i++)	//start at 1 because Player is 0, I dont want to include him here
	{
		int direction = rand() % 4 + 1;


		grid.removeFromGrid(characterList[i].getMX(), characterList[i].getMY());
		enemy.updateEnemy(direction, characterList[i].getMX(), characterList[i].getMY());
		grid.updateGrid(characterList[i].getTypeID(), characterList[i].getMX(), characterList[i].getMY());
	}
}

void Game2::battle()
{
	for (int i = 0; i < characterList.size(); i++)
	{
		for (int j = 0; j < characterList.size(); j++)
		{
			if ((characterList[i].getMX() == characterList[j].getMX()) && characterList[i].getMY() == characterList[j].getMY())
			{
				//enter something to make them fight here
			}
		}
	}
}

void Game2::clean()
{
	for (int i = 0; i < characterList.size(); i++)
	{
		grid.updateGrid(characterList[i].getTypeID(), characterList[i].getMX(), characterList[i].getMY());
	}
}