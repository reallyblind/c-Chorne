#include<iostream>
#include<string>

class Entity
{
public:
	virtual void PrintName(){} //create a V-table and means it's a polymorphic type 

};
class Player : public Entity
{

};
class Enemy : public Entity
{

};



int main()
{
	Player* player = new Player();
	Entity* actuallyPlayer = player;

	//Player* p = actuallyPlayer;//wrong

	Entity* actuallyEnemy = new Enemy();
	Player* p0 = dynamic_cast<Player*>(actuallyEnemy);//null

	if (dynamic_cast<Player*>(actuallyEnemy)) {

	}

	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);//work


	std::cin.get();
}