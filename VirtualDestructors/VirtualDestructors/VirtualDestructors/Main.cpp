#include<iostream>

class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	virtual ~Base() {
		std::cout << "Base Destructor\n";
	}//it's not marks virtual,which means that C++ isn't know that there might be like a method and overwrite,some kind of overwridden method in another kind of class further down the hierarchy Becasue with methods,just a normal method,If we maket this virtual , then it has ability to be overridden which means between it has to fit into the V-table(就要做虚函数表这样的设置) and all that has to work and be set up .With destructor is a bit different because a virtual Destructor you're not overriding the destructor. You 're adding a destructor .In other words, if I change the basic destructor to be virtual,it actually call both. It will call the Derived destructure first and then go up the hierarchy and also call the Base one.
};

class Derived : public Base
{
public:
	Derived() { m_Array = new int[5]; std::cout << "Derived Constructor\n"; }
	~Derived() {
		delete[] m_Array;
		std::cout << "Derived Destructor\n";
	}

private:
	int* m_Array;


};



int main()
{
	Base* base = new Base();
	delete base;
	std::cout << "---------------------\n";
	Derived* derived = new Derived();
	delete derived;
	std::cout << "---------------------\n";
	Base* poly = new Derived();
	delete poly;
	//Base Constructor
	//Derived Constructor
	//	Base Destructor

	std::cin.get();
}

