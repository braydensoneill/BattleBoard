#include "Grid.h"
#include "Player.h"
#include "GameCharacter.h"
#include <iostream>
#include <string>

using namespace std;

Grid::Grid() :
	g_empty("_"),
	g_grid()
{}

void Grid::setNewX(int x)
{
	g_newX = x;
}

void Grid::setNewY(int y)
{
	g_newY = y;
}

int Grid::getNewX()
{
	return g_newX;
}

int Grid::getNewY()
{
	return g_newY;
}

void Grid::makeGrid()
{
	for (int column = 0; column < 12; column++)
	{
		for (int row = 0; row < 12; row++)
		{
			g_grid[column][row] = g_empty;
		}
	}
}

void Grid::printGrid()
{
	cout << "Displaying Grid" << endl;
	for (int column = 0; column < 12; column++)
	{
		for (int row = 0; row < 12; row++)
		{
			cout << g_grid[column][row] << " ";
		}
		cout << endl;
	}
}

void Grid::updateGrid(string type, int x, int y)
{
	for (int column = 0; column < 12; column++)
	{
		for (int row = 0; row < 12; row++)
		{
			if (column == x && row == y)
				g_grid[column][row] = type;
		}
	}
}

void Grid::removeFromGrid(int x, int y)
{
	for (int column = 0; column < 12; column++)
	{
		for (int row = 0; row < 12; row++)
		{
			if (column == x && row == y)
				g_grid[column][row] = g_empty;
		}
	}
}
