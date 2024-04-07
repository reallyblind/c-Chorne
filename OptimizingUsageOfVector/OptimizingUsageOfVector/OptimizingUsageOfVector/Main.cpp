#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x,float y,float z)
		:x(x),y(y),z(z){}

	Vertex(const Vertex& vertex)
		:x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}

void Function(const std::vector<Vertex>& vertices)
{

}


int main()
{
	std::vector<Vertex> vertices;
	vertices.reserve(3);
	//this is different to resize or if I pass them three in the constructor like 'std::vector<Vertex> vertices(3);'.If we actually try and pass them three in the constructor this code won't evn compile.What this will do is not just allocate enough memory to store three vertices or three vertex objects.It's actually going to construct three vertex objects. We don't wanna construct any objects yet .We just wanna have enough memory to hold them. That's what Reserve does. Reserve makes sure that we actually have enough memory.
	vertices.emplace_back( 1,2,3 );
	vertices.push_back(Vertex( 4,5,6 ));
	vertices.emplace_back(Vertex(7, 8, 9));
	//we still getting a copy because this vertex is being constructed over here inside the main function and then copy into the actual vector. I would like to just construct it in the actual vector and the way that we can do that is by using emplace_back instead of push_back.This case we just passed the parameter list for the constructor ,which basically tells the vector ,hey,constructive vertex objects with the following parameters in place in our actual vector memory.

	

	std::cin.get();
}