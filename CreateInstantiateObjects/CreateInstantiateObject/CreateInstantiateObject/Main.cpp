#include<iostream>
#include<string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity():m_Name("Unknown"){}
	Entity(const String & name):m_Name(name){}

	const String& GetName() const { return m_Name; }
};

int main()
{
	/*
	Entity* e;
	{
		Entity entity("Cherno");//Entity entity = Entity("Entity");
		Entity* entity1 = new Entity("Entity");
		e = &entity;
		std::cout << entity->GetName() << std::endl;
		delete entity1;
	}//If we want to use e outside the scope,we couldn't allocate it on the stack,we have to resort to heap allocation
	*/
	Entity* e;
	{
		Entity* entity = new Entity("Entity");
		e = entity;
		std::cout << entity->GetName() << std::endl;
		delete entity;
	}
	std::cin.get();
}

