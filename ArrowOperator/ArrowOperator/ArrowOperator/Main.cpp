#include<iostream>
#include<string>

class Entity
{
public:
	int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		:m_Obj(entity)
	{
	}
	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* GetObject() {
		return m_Obj;
	}

	Entity* operator->() {
		return m_Obj;
	}

	const Entity* operator->() const {
		return m_Obj;
	}

};


int main1()
{
	/*
	Entity e;
	e.Print();

	Entity* ptr = &e;
	Entity& entity = *ptr;
	entity.Print();
	(*ptr).Print();
	ptr->Print();
	*/
	const ScopedPtr entity = new Entity();
	entity->Print();

	std::cin.get();
	return 0;
}




struct Vector3
{
	float x, y, z;

};

int main()
{
	int offset = (int)&((Vector3*)nullptr)->x;//this is going to try and give me some kind of piece of invalid memory.But what I'm going to do is actually take the memory address of that 'x'
	std::cout << offset << std::endl;

	offset = (int)&((Vector3*)nullptr)->y;
	std::cout << offset << std::endl;
	offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;


	std::cin.get();
}