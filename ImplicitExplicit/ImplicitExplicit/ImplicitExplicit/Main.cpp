#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name):m_Name(name),m_Age(-1){}

	explicit Entity(int age):m_Name("Unknown"),m_Age(age){}




};




void PrintEntity(const Entity& entity) {
	//Printing
}


int main()
{
	PrintEntity(22);//22 can be converted into an entity because you can call the constructor which takes an integer.
	PrintEntity(std::string("Cherno"));//this is not a 'std::string'.it's a char array.It's a const char array of 7 characters.In order for this to work,C++ would actually have to do two conversions,one from const char array into a string and then one from a string to an Entity and it's only allowed to do one implicit conversion
	
	Entity a("Cherno");
	Entity b = 22;//it's implicity converting that 22 into an Entity ,constructing an Entity out of it.Because there's a constructor for Entity which takes in an integer.





	std::cin.get();
}

