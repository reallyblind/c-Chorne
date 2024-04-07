#include<iostream>
#include<string>

#include<stdlib.h>

int main()
{
	using namespace std::string_literals;//There is something in C++14 called 'std::string_literals',which give us a mumber of functions just for convenience.
	std::wstring name0 = L"Cherno"s + "hello";
	//it's a function

	const char* example = R"(Line1
Line2
Line3
Line4)"//R means it will ignore escape characters.
const char* ex = "Line1"
"Line2\n"//we can put a '\n'if we wanted them to be new lines
"Line3";

	const char *name =u8 "Cherno";//1 byte
	const wchar_t* name2 = L"Cherno";//2byte(up to the compiler to decide,maybe 1byte,2 or 4byte,usually 2 on windows or 4 on linux)

	const char16_t* name3 = u"Cherno";//c++11,2byte,16 character
	const char32_t* name4 = U"Cherno";//c++11,4byte,32character

	std::cout << name << std::endl;
	std::cin.get();
}