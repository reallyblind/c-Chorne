#include<iostream>

struct Entity {
	static int x, y;

	void print() {
		std::cout << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;//have to define static variable somewhere

int main() {
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1 = { 5,8 };
	e1.x = 5;
	e1.y = 8;
	Entity::x = 4;//if the static variable inside the netity scope beacuse really that all they are , it's like we've made two variables that are inside a namespace called 'Entity'. They don't really belong to the class, they do of course in this sense that they can be private and public and they have like . So they are still kind of part of a class and not just a namespace.But for all intents and services they basically are just in a namespace.And they have nothing to do with any kind of allocation when you create a new class instance or anything like that 
	e.print();
	e1.print();
	std::cout << s_Variable << std::endl;
	std::cin.get();
}