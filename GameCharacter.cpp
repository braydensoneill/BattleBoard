#include "GameCharacter.h"
#include <iostream>
#include <string>

using namespace std;

GameCharacter::GameCharacter() 
{
	m_name = "?";
	m_typeID = "?";
	m_health = 0;
	m_speed = 0;
	m_x = 0;
	m_y = 0;
}

void GameCharacter::setMX(int x)
{
	m_x = x;
}

void GameCharacter::setMY(int y)
{
	m_y = y;
}

string GameCharacter::getTypeID()
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

void GameCharacter::spawn(string name, string typeID, int health, int speed, int x, int y)
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
	cout << "Name: " << m_name;
	cout << "	| ";
	cout << "Type: " << m_typeID;
	cout << "	| ";
	cout << "X: " << getMX();
	cout << "	| ";
	cout << "Y: " << getMY();
	cout << "	| ";
}

void GameCharacter::update()
{
	
}

void GameCharacter::stats()
{
	cout << "Health: " << m_health;
	cout << "	| ";
	cout << "Speed: " << m_speed << endl;
}

bool GameCharacter::isAlive()
{
	if (m_health > 0)
		return true;
	else
		return false;
}