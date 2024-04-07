#include<iostream>
#include<variant>
#include<optional>

std::optional<std::string> ReadFileAsString()
{
	return {};
}//allow us to have optional data that not present

enum class ErrorCode
{
	None = 0 , NotFound = 1 , NoAccess = 2
};

std::variant<std::string , ErrorCode> ReadFileAsString()
{
	
}//allow us to know the reason of the error

int main()
{
	std::variant<std::string, int> data;
	std::cout << sizeof(int) << "\n";//4
	std::cout << sizeof(std::string) << "\n";//28
	std::cout << sizeof(data) << "\n";//32

	//data = false;//it's still let us.However,if we do that,we actually won't be able to access it later;

	data = "Cherno";
	std::cout << std::get<std::string>(data) << "\n";
	data.index();//0
	if (auto value = std::get_if<std::string>(&data))
	{
		std::string& v = *value;
	}
	else
	{

	}
	data = 2;

	std::cout << std::get<int>(data) << "\n";



	std::cout << std::get<std::string>(data) << "\n";//std::get function will throw a 'bad variant access' exception for us so we can either handle that with 'try catch'.
	//However there's a better way to actually handle this and that is just not using exceptions



	std::cin.get();

}

