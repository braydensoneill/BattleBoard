#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <iostream>
#include <string>

using namespace std;

using namespace std;

class GameCharacter
{
public:
	GameCharacter();
	void setMX(int x);
	void setMY(int y);
	string getTypeID();
	int getHealth();
	int getMX();
	int getMY();
	void spawn(string name, string typeID, int health, int speed, int x, int y);
	void render();
	virtual void update();
	void stats();
	bool isAlive();

protected:
	string m_name;
	string m_typeID;
	int m_health;
	int m_speed;
	int m_x;
	int m_y;
};

#endif GAMECHARACTER_H
