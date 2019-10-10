#ifndef GRID_H
#define GRID_H

#include <iostream>
#include "GameCharacter.h"

using namespace std;

class Grid
{
public:
	char g_grid[12][12];
	Grid();
	void setNewX(int x);
	void setNewY(int y);
	int getNewX();
	int getNewY();
	void makeGrid();
	void printGrid();
	void playerLocations(char type, int x, int y);
	void playerMove(char type, int x, int y);
	void outOfBounds(int x, int y);

private:
	char g_empty;
	int g_newX;
	int g_newY;
};

#endif GRID_H
