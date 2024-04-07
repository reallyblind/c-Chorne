#include<iostream>
#include<string>

void PrintEntity(const Entity& e);

class Entity
{
public:
	int x, y;

	Entity(int x, int y) 
	{
		Entity* const e = this;
		this->x = x;
		this->y = y;

		Entity& e = *this;

		PrintEntity(*this);

		delete this;
		//I've seen this code a handle of time in very very specialized cases.My recommendation would be to avoid doing this, because your frame memory from a member function and If you decide to ever access any member data,after calling delete this,you're going to explode because the memory has been free.
	}
	int GetX() const
	{
		const Entity& e = *this;
		return x;
	}

};

void PrintEntity(const Entity* e)
{
	//print
}


int main()
{





	std::cin.get();
}
