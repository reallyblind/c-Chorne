#include<iostream>




int main()
{
	int* array = new int[50];//This is just setting the size of those allocation.We're allocating 200 bytes of memory.That's all that is. Nothing's been initialized.

	int** a2d = new int* [50];//What I'm going to storing here is going to be a buffer of a pointer(指针对象的缓冲区)
	//The actual arrays that we're going to storing haven't actually been allocated. What we've just created here,is we've essentially allocated 200 bytes memory(One integer is 4 bytes)
	array[0] = nullptr;//array[0] is an integer
	a2d[0] = nullptr;//a2d[0] is an integer pointer
	//The big thing here is again,the type is just setting basically the syntax that you can use to deal with this data. In the end,it's 200 bytes .That's all you've done at this stage.

	for (int i = 0; i < 50; i++)
		a2d[i] = new int[50];


	int*** a3d = new int** [50];
	for (int i = 0; i < 50; i++)
	{
		a3d[i] = new int* [50];
		for (int j = 0; j < 50; j++) 
		{
			a3d[i][j] = new int[50];
		}
	}

	a3d[0][0][0] = 0;
	a2d[0][0] = 0;

	//delete[] a2d;//will be a memory link because we have no way access them
	for (int i = 0; i < 50; i++)
		delete[] a2d[i];
	delete[] a2d;
	//going to be cache miss,we need more cache hits


	int* array = new int[5 * 5];
	for (int i = 0; i < 5 * 5; i++)
	{
		array[i] = 2;//treat it as an 2D grid. It going to be more cache hit
	}

	std::cin.get();
}