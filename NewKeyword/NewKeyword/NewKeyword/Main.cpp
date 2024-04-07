#include<iostream>
#include<string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() :m_Name("Unknown") {}
	Entity(String name) :m_Name(name) {}

	const String& GetName() const { return m_Name; }
};


int main() {
	int a = 2;
	int* b = new int[50];//200 bytes on the stack

	Entity* e = new Entity[50];//on the heap

	Entity* e = new Entity();//on the heap.We not only allocate our memory on the heap to store the Entity,but also call the constructor.
	//new is a operator,just like add,sub,equals,which means you can actually overload the operator and change his behaver
	//this call the constroctor
	Entity* e = (Entity*)malloc(sizeof(Entity));//this purely allocate the memory,and then give us a pointer to that memory,not calling the constroctor

	Entity* e = new(b) Entity();//the new actually support a something called ¡®placement new¡¯. It actually decide the memory come from. So you not relly allocate the memory this case,you¡¯re just calling constructor and initializing your Entity in a specific memory address

	delete e;
	//when you do with new keyword,you have to remember use the delete 
	delete[] b;

	std::cin.get();
}

