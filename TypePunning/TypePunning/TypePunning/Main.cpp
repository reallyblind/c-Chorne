#include<iostream>

struct Entity
{
	int x, y;

	int* GetPositions()
	{
		return &x;
	}
};


int main1()
{
	int a = 50;//0x0113F6EC : 32 00 00 00 cc cc cc cc : 50
	double value = a;//0x0113F6DC : 00 00 00 00 00 00 49 40 cc cc cc cc cc cc cc cc just near the memory of variable 'a'
	//0x0113F6DC:00 00 00 00 00 00 49 40 cc cc cc cc cc cc cc cc 32 00 00 00 cc cc cc cc : 50.000000000000000
	//Now this case it was an implicit conversion
	//
	std::cout << value << std::endl;
	
	double value2 = *(double*)(&a);//0x0113F6CC : 32 00 00 00 cc cc cc cc cc cc cc cc cc cc cc cc :-9.2559592117432565e+61

	double& value3 = *(double*)(&a);
	value3 = 0.0;//if you didn't want to actually create a whole new variable,you just want to access this int as a double. this can just a reference not copy it into a new variable and That way you will be actually editing this integer memory. So that's dangerous. Because if I decide to write 0.0 here.It's actually going to write 8 bytes instead of 4 bytes.But we only have 4 bytes and this might even crash.
	std::cin.get();
	return 0;
}

int main()
{
	Entity e = { 5,8 };//The struct itself does not contain any kind of padding(Моід) any kind of data.If it's an empty struct,then it has to be at least 1 byte. So there will be something in there because we need to able address that memory and we can't address that if it's not there. So we have to have at least 1 byte in structive even if it's empty .But if we have variables in there like 'x','y'. That struct is just 2 integers. It's not how new that works.It's just 2 integers.So, what we can do here is we can actually just treat this Entity struct as an int array .
	int* position = (int*)&e;
	std::cout << position[0] << "," << position[1] << std::endl;

	int y = *(int*)((char*)&e + 4);
	std::cout << y << std::endl;///y position 

	int* p = e.GetPositions();//linking to the same memory. Haven't get copied
	p[0] = 0;
	//if you don't want to deal with raw casts,you can use reinterpret_cast to do the same thing 

	std::cin.get();
}