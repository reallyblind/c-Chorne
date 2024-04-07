#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

std::string GetName()
{
	return "Cherno";
}

class Device{};

auto GetName2() -> char* //c++11 
{

}

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() {
		return m_Devices;
	}
};

int main()
{
	auto name = GetName();

	int b = name.size();

	auto a = 5L;

	std::cout << a << std::endl;
	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");

	for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	for (auto it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;

	DeviceManager dm;
	const DeviceMap& devices =
	dm.GetDevices();

	const auto& device = dm.GetDevices();



	std::cin.get();
}