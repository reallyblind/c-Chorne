#include<iostream>
#include<string>

void PrintString(const std::string& string) {//it's a copy,change it here won't change the oringinal structure.Copying is actually quite slow.So whenever you pass a string like this and it's going to be read only,make sure you pass it by const reference.
	std::cout << string << std::endl;
}

int main() {
	std::string name = "Cherno";//When you define strings like literally double quotes and then a word or multiple words in C++,it's actually a const char array,not just a char array.But implicit const to a char pointer if you need ti manipulate the contest of the string,it's fine.
	
	//std::string name1 = "Cherno" + "Hello";//wrong.This double quarter kind of thing is a const char array.It's not a real string. you can't add two pointers or two arrays together.
	std::string name1 = "Cherno";// +"Hello";
	name += "hello!";
	//or std::string name1 = std::string("Cherno")+"hello!";explicitly calling a string instructor so you're making a string out of this and then depending that to it as well
	bool contains = name.find("no") != std::string::nops;

	std::cout << name << std::endl;//cherno

	std::cin.get();
}