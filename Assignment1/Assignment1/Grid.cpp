#include "Grid.h"
#include "Player.h"
#include "GameCharacter.h"

Grid::Grid() :
	g_empty('_'),
	g_newX(),
	g_newY()
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

void Grid::playerLocations(char type, int x, int y)
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

void Grid::playerMove(char type, int x, int y)
{
	char input;

	Player player1;

	for (int column = 0; column < 12; column++)
	{
		for (int row = 0; row < 12; row++)
		{
			if (column == x && row == y)
				g_grid[column][row] = g_empty;
		}
	}

	cout << "Type (w) to go up" << endl;
	cout << "Type (a) to go down" << endl;
	cout << "Type (s) to go left" << endl;
	cout << "Type (d) to go right" << endl;
	cout << endl;

	cin >> input;
	switch (input)
	{
		case 'w':
			cout << "You chose to go Up" << endl;
			x = x - 1;
			if (x < 0)
				x = 11;
			y = y;
			//outOfBounds(x, y);
			break;
		case 'a':
			cout << "You chose to go down" << endl;
			x = x;
			y = y - 1;
			if (y < 0)
				y = 11;
			//outOfBounds(x, y);
			break;
		case 's':
			cout << "You chose to go left" << endl;
			x = x + 1;
			if (x > 11)
				x = 0;
			y = y;
			//outOfBounds(x, y);
			break;
		case 'd':
			cout << "You chose to go right" << endl;
			x = x;
			y = y + 1;
			if (y > 11)
				y = 0;
			//outOfBounds(x, y);
			break;
	}

	setNewX(x);
	setNewY(y);

	for (int column = 0; column < 12; column++)
	{
		for (int row = 0; row < 12; row++)
		{
			if (column == x && row == y)
				g_grid[column][row] = type;
		}
	}
}
