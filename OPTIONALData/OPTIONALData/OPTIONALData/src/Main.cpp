#include<iostream>
#include<fstream>
#include<optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);
	if (stream)
	{
		//read file
		std::string result;
		stream.close();
		return result;
	}
	return {};
}

int main()
{
	std::optional<std::string> data = ReadFileAsString("data.txt");

	std::string value = data.value_or("Not present");
	


	if (data.has_value()) {//if(data)
		
		std::cout << "File read successfully\n";
	}
	else {
		std::cout << "File could not be opened!\n";
	}




	std::cin.get();
}