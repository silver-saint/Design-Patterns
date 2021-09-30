#include <iostream>

struct vector
{
		int x;
		int y;
		int z;
};


void toVulkanOrGL(vector& vect)
{
	int y = vect.y;
	vect.y = -y;
}

int main(int argc, char *argv[])
{
		vector a;
		
		std::cout << "Enter values for vector in OpenGL sematics!" << std::endl;
		std::cout << "x: ";
		std::cin >> a.x;
		std::cout << "y: ";
		std::cin >> a.y;
		std::cout << "z: ";
		std::cin >> a.z;
		
		toVulkanOrGL(a);
		
		std::cout << "Vulkan: x: " << a.x <<  ", y: " << a.y << ", z: " << a.z << std::endl;
}
