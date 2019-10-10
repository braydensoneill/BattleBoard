#include "GameCharacter.h"
#include "Player.h"
#include "Enemy.h"
#include "Grid.h"
#include <iostream>

#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	Grid grid;
	Player player1;
	Enemy enemy1;
	Enemy enemy2;
	Enemy enemy3;

	grid.makeGrid();

	player1.spawn("Player", 'P', 100, (rand() % 3) + 1, rand() % 12 , rand() % 12);
	grid.playerLocations(player1.getTypeID(), player1.getMX(), player1.getMY());
	player1.render();
	player1.stats();

	cout << endl;
	grid.printGrid();
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;

	enemy1.spawn("Enemy1", 'E', 100, (rand() % 3) + 1, rand() % 12, rand() % 12);
	grid.playerLocations(enemy1.getTypeID(), enemy1.getMX(), enemy1.getMY());
	enemy1.render();
	enemy1.stats();

	cout << endl;
	grid.printGrid();
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;

	enemy2.spawn("Enemy2", 'E', 100, (rand() % 3) + 1, rand() % 12, rand() % 12);
	grid.playerLocations(enemy2.getTypeID(), enemy2.getMX(), enemy2.getMY());
	enemy2.render();
	enemy2.stats();

	cout << endl;
	grid.printGrid();
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;

	enemy3.spawn("Enemy3", 'E', 100, (rand() % 3) + 1, rand() % 12, rand() % 12);
	grid.playerLocations(enemy3.getTypeID(), enemy3.getMX(), enemy3.getMY());
	enemy3.render();
	enemy3.stats();
	
	cout << endl;
	grid.printGrid();
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	while (player1.getHealth() > 0)
	{
		cout << endl;
		grid.playerMove(player1.getTypeID(), player1.getMX(), player1.getMY());
		player1.setMX(grid.getNewX());
		player1.setMY(grid.getNewY());
		grid.playerLocations(player1.getTypeID(), player1.getMX(), player1.getMY());
		cout << endl;
		grid.printGrid();
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

	return 0;
}