#include<iostream>
#include<string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity :public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override{ return "Entity"; }
};

class Player : public Entity 
{
private:
	std::string m_Name;
public:
	Player(const std::string &name):m_Name(name){}
	std::string GetName() override{ return m_Name; }
	std::string GetClassName() override { return "Player"; }

};

void Print(Printable *obj) {
	std::cout << obj->GetClassName() << std::endl;
}

void PrintName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

int main() {
	Entity* e = new Entity();//we can't instance this Entity class if it has pure virtual function
	PrintName(e);//Entity


	Player* p = new Player("Cherno");
	PrintName(p);//Cherno
	
	Print(e);//Entity
	Print(p);//Player
	std::cin.get();
}
