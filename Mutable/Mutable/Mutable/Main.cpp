#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;//marking a class member is mutable means that constant methods inside that class can actually modify that member.
public:


	const std::string& GetName() const
	{
		m_DebugCount++;
		return m_Name;
	}
};


int main() {
	const Entity e;
	e.GetName();


	int x = 8;
	auto f = [=]() mutable//you just copying that into the lambda
	{
		x++;//the same as 'int y =x;y++;'
		std::cout << x << std::endl;
	}
	f();//x = 8;

	std::cin.get();
}