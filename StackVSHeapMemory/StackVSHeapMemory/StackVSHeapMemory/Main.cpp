#include<iostream>
#include<string>

struct Vector3
{
	float x, y, z;

	Vector3()
		:x(10),y(11),z(12){}
};

int main()
{
	int value = 5;
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	//They are next each other ,Now there are some bytes between they two.That's because we are in debug mode,it actually add the safety guards kind of around all about variables to make sure that we don't overflow them or access them in the wrong memory address and all that kind of stuff.
	Vector3 vector;

	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvector = new Vector3();



	std::cin.get();
}
