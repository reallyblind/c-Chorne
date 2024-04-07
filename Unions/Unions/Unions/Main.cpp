#include<iostream>

struct Vector2 {
	float x, y;
};


struct Vector4 {
	union
	{
		struct
		{
			float x, y, z, w;
		};

		struct 
		{
			Vector2 a, b;
		};
	};


	/*
	Vector2 GetA()
	{
		return *(Vector2*)&x;
	}
	*/
};

void PrintVector2(const Vector2& vector)
{
	std::cout << vector.x << "," << vector.y << std::endl;
}

int main1()
{
	struct Union
	{
		union
		{
			float a;
			int b;
		};
	};

	Union u;
	u.a = 2.0f;
	std::cout << u.a << "," << u.b << std::endl;


	std::cin.get();
	return 0;
}


int main()
{
	Vector4 vector = { 1.0f,2.0f,3.0f,4.0f };
	PrintVector2(vector.a);//1.0,2.0
	PrintVector2(vector.b);//3.0,4.0
	vector.z = 500.0f;
	std::cout << "---------------" << std::endl;

	PrintVector2(vector.a);//1.0,2.0
	PrintVector2(vector.b);//500.0,4.0
	std::cin.get();
}