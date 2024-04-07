#include<iostream>
#include<tuple>
#include<string>


std::tuple<std::string, int> CreatePerson()
{
	return { "Cherno" , 24 };
}

int main()
{
	
	auto [name, age] = CreatePerson();//C++17
	std::cout << name;

	std::cin.get();
}