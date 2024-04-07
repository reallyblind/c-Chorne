#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values) {
		func(value);
	}
}
int main()
{
	std::vector<int> values = { 1,5,4,2,3 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });

	std::cout << *it << std::endl;

	int a = 5;

	auto lambda = [=](int value) mutable {a = 5; std::cout << "Value: " << value << a << std::endl; };
	ForEach(values,lambda);//lambda,anonymous function


	std::cin.get();
}