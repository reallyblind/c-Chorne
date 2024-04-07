#include<iostream>

class Singleton {
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() { return *s_Instance; }

	void Hello(){}

};

Singleton* Singleton::s_Instance = nullptr;
void Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() {
	Singleton::Get().Hello();
	std::cin.get();
}