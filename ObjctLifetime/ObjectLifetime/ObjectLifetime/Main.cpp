#include<iostream>
#include<string>

class Entity
{
public:
	Entity()
	{
		std::cout << "Create Entity!" << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}





};

int* CreateArray()
{
	int array[50];
	//we're not allocating on it on the heap.We're not calling new or doing some kind of heap allocation.We're just declaring it on the stack.When we return a pointer to that,it's returning a pointer to that stack memory. That stack memory gets cleared as soon as we go out of scope.So if you write code like this,it's going to fail.

	//You have two options.You can either get this to allocate the array on the heap.Or you can create an array out of that scope.
	return array;
}

class ScopedPtr//a greate example.What a very basic smart_ptr , unique_ptr does
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		:m_Ptr(ptr){}
	~ScopedPtr()
	{
		delete m_Ptr;
	}

};


int main() 
{
	{

		Entity e;
	}
	{
		Entity* e = new Entity();
		delete e;
	}
	{
		ScopedPtr e = new Entity();
	}


	//int array[50];
	//CreateArray(array);

	std::cin.get();
}


