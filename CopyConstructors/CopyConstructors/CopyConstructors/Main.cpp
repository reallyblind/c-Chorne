#include<iostream>
#include<string>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];
		memcpy(m_Buffer, string, m_Size+1);//At the mement,each character is one byte of memory.So we need m_size bytes
		m_Buffer[m_Size] = 0;
		//strcpy includes the null termination character
	}

	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}

	
	String(const String& other)//A copy constructor is a constructor that gets called for that second string when you actually copy it.When you assign a string to an object,that is also a string
		//:m_Buffer(other.m_Buffer),m_m_Size(other.m_Size){}
		//this is what c++ kind of supplies us with
		//or if you wanna be more exciting
		//{memcpy(this, &other, sizeof(String)}
		// = delete; //delete the copy
		:m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}



	~String()
	{
		delete[] m_Buffer;
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

void PrintString(const String& string)//we need a reference,not a copy.So we should use its reference,add the '&'.The const not only means that we can't modify the character in the String but also means that we can't pass temporary our values into the actual function
//Always pass your objects by constant reference 
{
	std::cout << string << std::endl;
}

struct Vector2
{
	float x, y;
};


int main()
{
	int a0 = 2;

	int b0 = a0;//a copy of 'a0'

	Vector2 a1 = { 2,3 };
	Vector2 b1 = a1;//a copy of 'a1'
	b1.x = 5;//'class' work the same way as basic variable type

	Vector2* a2 = new Vector2();
	Vector2* b2 = a2;//not a copy,just two pointer point to the same memory

	String string = "Cherno";
	String second = string;//shallow copy,just copy the pointer member,they point to the same memory.And then when the program end,it will be deleted twice.We trying to free the same memory twice.That's why we get a crash
	second[2] = 'a';
	std::cout << string << std::endl;
	std::cout << second << std::endl;



	std::cin.get();
}
