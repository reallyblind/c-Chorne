#include<iostream>
//cout遇到char主动转换成字符输出,其它的输出数字
int main() {
	int variable = 0;

	std::cout << "Hello WOrld!" << std::endl;
	std::cin.get();

	char a = 65;
	std::cout << a << std::endl;//cout遇到char主动转换成字符输出


	short b = 'b';
	std::cout << b << std::endl;

	double c = 5.5;
	std::cout << a << std::endl;

	float d = 5.5f;//加上f才算是float，否则就是double
	std::cout << a << std::endl;
}