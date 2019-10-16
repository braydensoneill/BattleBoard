#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player()
{}

void Player::updatePlayer(int x, int y)
{
	char direction;
	int decideDistance = rand() % 10 + 1;
	int distance = 0;

	if (decideDistance <= 8)
		distance = 1;
	else if (decideDistance >= 9)
		distance = m_speed;

	cout << "Enter which direction you want to go: " << endl;
	cout << "Press [w] to go up " << endl;
	cout << "Press [a] to go left " << endl;
	cout << "Press [s] to go down " << endl;
	cout << "Press [d] to go right " << endl;
	cin >> direction;
	cout << endl;

	switch (direction)
	{
		case 'w':
			cout << m_name << " chose to go up" << endl;
			x -= distance;
			y = y;
			if (x < 0)
			{
				x = 1;
				m_health -= m_speed * 2;
			}
			break;
		case 'a':
			cout << m_name << " chose to go left" << endl;
			x = x;
			y -= distance;
			if (m_y < 0)
			{
				m_y = 1;
				m_health -= m_speed * 2;
			}
			break;
		case 's':
			cout << m_name << " chose to go down" << endl;
			x += distance;
			y = y;
			if (x > 11)
			{
				x = 10;
				m_health -= m_speed * 2;
			}
			break;
		case 'd':
			cout << m_name << " chose to go right" << endl;
			x = x;
			y += distance;
			if (y > 11)
			{
				y = 10;
				m_health -= m_speed * 2;
			}
			break;
		default:
			cout << m_name << " did not move" << endl;
	}

	setMX(x);
	setMY(y);
}