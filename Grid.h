#ifndef GRID_H
#define GRID_H

#include "GameCharacter.h"
#include <iostream>
#include <string>

using namespace std;

class Grid
{
public:
	string g_grid[12][12];
	Grid();
	void setNewX(int x);
	void setNewY(int y);
	int getNewX();
	int getNewY();
	void makeGrid();
	void printGrid();
	void updateGrid(string type, int x, int y);
	void removeFromGrid(int x, int y);

private:
	string g_empty;
	int g_newX;
	int g_newY;
};

#endif GRID_H
