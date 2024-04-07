#include<iostream>
#include<string>

template<typename T,int N>
class Array
{
private:
	T m_Array[N];
public:
	int GetSize() const { return N; }



};


template<typename T>
//first thing that gives away that this is an actual template is well the word template , this means that this is a template that will be evaluated(ÆÀ¹À) at compile time. So basically this isn't actual code . This isn't actual a real function .This only gets created when we actually call it ,and when we call it based on how we call it with what types does, this actually get created and compiled as source code
void Print(T value)
{
	std::cout << value << std::endl;
}
//If I'm not using this point function at all. This Print function does not really exist. This function is just a template which actually gets created when we call the Print function ,with the given template document.
	
//MSVC won't tell you about errors in templates that you're not actually using .Some compilers like Clang actually will .So it's kind of compiler dependent.

int main()
{
	Print<int>(5);
	Print<std::string>("Hello");
	Print(5.5f);//it's possible for the type to actually be worked out by the argument that we use here erther by the return value which we will talk about later 

	Array<int,5> array;
	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}
//meta programming
