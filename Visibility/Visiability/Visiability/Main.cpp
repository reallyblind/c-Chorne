#include<iostream>


class Entity
{
protected:
	int X, Y;
	void Print(){}
public:
	Entity()
	{
		X = 0;

	}
	

};

class Player :public Entity
{
public:
	Player() {
		X = 2;
		Print();//
		
	}
};

int main() {
	Entity e;
	e.Print();//still can't do this in Main
	e.X = 0;

	std::cin.get();
}