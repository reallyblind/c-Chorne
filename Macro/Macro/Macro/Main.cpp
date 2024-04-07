#include<iostream>
#include<string>

#if 0

#if _DEBUG == 1

#define WAIT std::cin.get()

#define OPEN_CURLY {

#define LOG(x) std::cout<<x<<std::endl
#elif defined(_RELEASE)
#define LOG(X)
#endif

#endif
int main()
{

	LOG("Hello");//std::cout<<"Hello"<<std::endl

	std::cin.get();
}


