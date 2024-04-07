#include<iostream>
#include<array>

class Entity {
public:
	static const int example1Size = 5;
	int example1[example1Size];

	int* example = new int[5];

	std::array<int, 5> another;

	Entity() {
		int a[5];
		int count = sizeof(example) / sizeof(int);
		for (int i = 0; i < another.size(); i++)
			example[i] = 2;
	}


};

int main() {
	Entity e;

	std::cin.get();
}