#include "Enemy.h"

Enemy::Enemy() :
	m_Difficulty(0)
{}

void Enemy::Difficulty() const
{
	cout << "Enemy Difficulty: " << m_Difficulty << endl;
}