#include<iostream>

class Entity {
public:
	float X, Y;

	void Move(float xa, float ya) {
		X += xa;
		Y += ya;
	}


};
class Player :public Entity
{
public:
	const char* Name;

	void PrintName() {
		Move(2, 2);
		std::cout << Name << std::endl;
	}

};

int main() {
	std::cout << sizeof(Entity) << std::endl;//8
	std::cout << sizeof(Player) << std::endl;//12

	Player player;
	player.Move(5,5);
	player.X = 2;
	
	std::cin.get();

}