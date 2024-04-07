#include<iostream>
#include<any>

void* operator new(size_t size) {
	return malloc(size);
}



int main()
{
	std::any data;
	data = 2;
	data = "Cherno";
	data = std::string("Cherno");

	std::string string0 = std::any_cast<std::string>(data);
	//std::string,the type you wanna cast to . If the data is not the type you're tring to casting into ,this will throw a exception about any_cast exception.

	std::string& string0 = std::any_cast<std::string&>(data);



	std::cin.get();
}