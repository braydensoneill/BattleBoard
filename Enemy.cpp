#include "Enemy.h"
#include <iostream>
#include <string>

using namespace std;

Enemy::Enemy()
{}

void Enemy::updateEnemy(int direction, int x, int y)
{
	int decideDistance = rand() % 10 + 1;
	int distance = 0;

	if (decideDistance <= 8)
		distance = 1;
	else if (decideDistance >= 9)
		distance = m_speed;

	switch (direction)
	{
		case 0: 
			cout << m_name << " chose to go up" << endl;
			x -= distance;
			y = y;
			if (x < 0)
			{
				x = 1;
				m_health -= m_speed * 3;
			}
			break;
		case 1:
			cout << m_name << " chose to go left" << endl;
			x += distance;
			y = y;
			if (x > 11)
			{
				x= 10;
				m_health -= m_speed * 3;
			}
			break;
		case 2:
			cout << m_name << " chose to go down" << endl;
			x = x;
			y -= distance;
			if (y < 0)
			{
				y = 1;
				m_health -= m_speed * 3;
			}
			break;
		case 3:
			cout << m_name << " chose to go right" << endl;
			x = x;
			y += distance;
			if (y > 11)
			{
				y = 10;
				m_health -= m_speed * 3;
			}
			break;
		default:
			cout << m_name << " did not move" << endl;
	}
	setMX(x);
	setMY(y);
}

string Enemy::randomName()
{
	int num1 = rand() % 15;
	int num2 = rand() % 11;
	string firstName;
	string lastName;

	switch (num1)
	{
		case 0:firstName = "Conor"; break;
		case 1:firstName = "Dillon"; break;
		case 2:firstName = "Elijah"; break;
		case 3:firstName = "Eric"; break;
		case 4:firstName = "Jamie"; break;
		case 5:firstName = "Jordan"; break;
		case 6:firstName = "Martin"; break;
		case 7:firstName = "Mikolaj"; break;
		case 8:firstName = "Thomas"; break;
		case 9:firstName = "Tony"; break;
		case 10:firstName = "Caolan"; break;
		case 11:firstName = "Michael"; break;
		case 12:firstName = "Timmy"; break;
		case 13:firstName = "Sylwek"; break;
		case 14:firstName = "James"; break;
		default:firstName = "Brayden"; break;
	}

	switch (num2)
	{
		case 0:lastName = "Doorly"; break;
		case 1:lastName = "Kerr"; break;
		case 2:lastName = "Omotosho"; break;
		case 3:lastName = "Drago"; break;
		case 4:lastName = "Renehan"; break;
		case 5:lastName = "Flemmings"; break;
		case 6:lastName = "Coclough"; break;
		case 7:lastName = "Carroll"; break;
		case 8:lastName = "Maguire"; break;
		case 9:lastName = "Fogarty"; break;
		case 10:lastName = "Fennessy"; break;
		default:lastName = "O Neill"; break;
	}

	m_name = firstName + " " + lastName;

	return m_name;
}