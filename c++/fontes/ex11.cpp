#include <iostream>

int AreaCube (int length, int width = 25, int heigth = 1);

int main() {
	int length = 100, width = 50, height = 2, area;

	area = AreaCube (length, width, height);
	
	std::cout << "First area equals: " << area << "   \n";
	area = AreaCube (length);
	std::cout << "Third ";
return 0;
}

int AreaCube (int l, int w, int h)
{

	return (l * w * h);
}
