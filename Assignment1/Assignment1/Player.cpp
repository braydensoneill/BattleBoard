#include "Player.h"

Player::Player() :
	m_Level(0)
{}

void Player::Level() const
{
	cout << "Player Level: " << m_Level << endl;
}