#include <iostream>

typedef unsigned short int USHORT;

int main(){
	USHORT Width = 5;
	USHORT Length;
	Length = 10;
	USHORT Area = Width * Length;
	std::cout << "Width: "<< Width << "\n";
	std::cout << "Lenght: "<< Length << "\n";
	std::cout << "Area: "<< Area << "\n";
return 0;
}
