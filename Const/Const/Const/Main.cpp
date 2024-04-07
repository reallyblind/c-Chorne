#include<iostream>
#include<string>

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;//if you have a variable which really need to change in a readonly function,you can put a 'mutable'(means able to be change)
public:
	int GetX() const//It comes kind of not really to do with a variable but after a method name,it only work in a class by this way.It means is that this method is not going to modify to find any of the actual class.So we cannot modify class member variable.Readonly from the class 
	{
		var = 2;//you can change it here
		return m_x;
	}

	int GetX() 
	{
		return m_x;
	}

	void SetX(int X)//we will change the variabl,so we usually use const in getter
	{
		m_X = X;
	}

};

void PrintEntity(const Entity& e) //reference to get the instance, not the copy of the instance,const to not change that
{

	std::cout << e.GetX() << std::endl;//e.GetX is that one has const,because in const function,you still keep that function that you call is const
}

int main()
{
	const int MAX_AGE = 90;

	const int* a = new int;//can't change the context of the pointer,but can reassign the actual point itself to point to something else
	//*a = 2;//wrong
	a = (int*)&MAX_AGE;

	const int* const b = new int;
	*b = 2;//can change the contex of the pointer,but can't reassign the actual point itself to point to something else
	//b = (int*)&MAX_AGE;//wrong
	std::cout << *a << std::endl;

	std::cin.get();
}