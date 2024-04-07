#include<iostream>
#include<string>
#include<memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
	void Print(){}

};


int main()
{
	{//empty scope
		//std::unique_ptr<Entity> entity(new Entity());//explicitly

		std::unique_ptr<Entity> entity = std::make_unique<Entity>();//Created Entity
		//the preferred way though to construct this would actually be to assign it to this.It's actually due to exception safety.

		//std::unique_ptr<Entity> e0 = entity;//wrong
		/*
		source code :
		unique_ptr(const unique_ptr&) = delete;
		unique_ptr& operator=(const unique_ptr&) = delete;
		*/

		entity->Print();
	}//Destroyed Entity

	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();//Created Entity
			e0 = sharedEntity;
		}
		
	}//Destroyed Entity

	{
		std::weak_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();//Created Entity

			//std::weak_ptr<Entity> weakEntity = sharedEntity;
			//when you assign a shared point to another shared_ptr of thus copying it,iy will increase ref count.But when you assign a shared_ptr to a weak_ptr,it won't increase the ref count.
			//You can ask it 'is this alive?' and if it is you can do whatever you need to do.It won't keep it alive because it doesn't actually increase the ref count.
			e0 = sharedEntity;
		}//Destroyed Entity

	}

	std::cin.get();
}

