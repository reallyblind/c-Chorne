#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z ;
	return stream;
}

void Function(const std::vector<Vertex>& vertices)
{

}


int main()
{
	std::vector<Vertex> vertices;
	//it's technically more optimal to store vertex objects instead of pointers because if you solve vertex objects ,your memory is going to be in line. Dynamic arrays are arrays in the sense that their memory is contiguous ,which means that it's not fragmented in memory.It's just in a row.And if you store vertex objects in line like this you've literally got one in vertex one after another and that's really optimal if you actually want to iterate over them and set all the more changes that won't read all of them or whatever it is that you want to do with them .Because they are going to be on the same cache line in that sense

	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });

	Function(vertices);

	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;//1,2,3  //4,5,6

	

	//vertices.clear();

	vertices.erase(vertices.begin()+1);

	for (Vertex& v : vertices)
		std::cout << v << std::endl;//1,2,3
	std::cin.get();
}
