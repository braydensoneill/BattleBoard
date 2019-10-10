#include "GameCharacter.h"

GameCharacter::GameCharacter() 
{
	m_name;
	m_typeID;
	m_health;
	m_speed;
	m_x;
	m_y;
}

void GameCharacter::setMX(int x)
{
	m_x = x;
}

void GameCharacter::setMY(int y)
{
	m_y = y;
}

char GameCharacter::getTypeID()
{
	return m_typeID;
}

int GameCharacter::getHealth()
{
	return m_health;
}

int GameCharacter::getMX()
{
	return m_x;
}

int GameCharacter::getMY()
{
	return m_y;
}

void GameCharacter::spawn(string name, char typeID, int health, int speed, int x, int y)
{
	m_name = name;
	m_typeID = typeID;
	m_health = health;
	m_speed = speed;
	m_x = x;
	m_y = y;

	cout << m_name << " has been spawned" << endl;
}

void GameCharacter::render()
{
	cout << "Name: " << m_name << endl;
	cout << "TypeID: " << m_typeID << endl;
	cout << "X-Coordinate: " << m_x << endl;
	cout << "Y-Coordinate: " << m_y << endl;
}

void GameCharacter::update()
{
	cout << "Use this to update" << endl;
}

void GameCharacter::stats()
{
	cout << "Health: " << m_health << endl;
	cout << "Speed: " << m_speed << endl;
}

bool GameCharacter::isAlive()
{
	if (m_health > 0)
		return true;
	else
		return false;
}