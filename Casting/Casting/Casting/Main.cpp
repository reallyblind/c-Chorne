#include<iostream>

class Base {
public:
	Base() {};
	virtual ~Base() {};
};

class Derived :public Base
{
public:
	Derived() {};
	~Derived() {};
};

class AnotherClass :public Base
{
public:
	AnotherClass() {};
	~AnotherClass() {};
};

int main()
{
	int a = 5;
	double value = a;//implict conversion

	double value1 = 5.25;
	int a1 = value1;//implict conversion because we needn't have to specify
	int b1 = (int)value1;//If we want to be explicit,we can cast this double into an integer like 

	double value2 = 5.25;
	double a2 = (int)value2 + 5.3;//1.03
	//C style cast

	double s = static_cast<int>(value2) + 5.3;
	
	//double s1 = reinterpret_cast<AnotherClass*>(&value2) + 5.3;

	Derived* derived = new Derived();

	Base* base = derived;

	AnotherClass* ac = dynamic_cast<AnotherClass*>(base);



	std::cin.get();
}

