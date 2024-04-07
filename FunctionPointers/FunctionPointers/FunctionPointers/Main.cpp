#include<iostream>
#include<vector>

/*
void HelloWorld()
{
	std::cout << "Hello World!" <<std::endl;
}

void HelloWorld2(int a)
{
	std::cout << "Hello World!2" << a << std::endl;
}
*/

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}


void ForEach(const std::vector<int>& values,void(*func)(int))
{
	for (int value : values) {
		func(value);
	}
}

int main()
{
	/*typedef void(*HelloWorldFunction)();
	typedef void(*HelloWorldFunction2)(int);


	HelloWorldFunction function00 = HelloWorld;
	function00();
	void(*cherno)();
	cherno = HelloWorld;
	cherno();

	void(*cherno2)() = HelloWorld;
	cherno2();

	auto function03 = HelloWorld;
	function03();


	HelloWorldFunction2 function10 = HelloWorld2;

	function10(8);
	*/

	std::vector<int> values = { 1,5,4,2,3 };
	
	ForEach(values, PrintValue);
	ForEach(values, [](int value) {std::cout << "Value: " << value << std::endl; });//lambda,anonymous function

	std::cin.get();
}