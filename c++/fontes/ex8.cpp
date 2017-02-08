#include <iostream>

int FindArea (int length, int width);

int main(){

	int l;
	int w;
	int a;
	
	std::cout << "\n Qual o tamanho do teu jardim? \n";
	std::cin >> w;
	std::cout << "\n Qua o comprimento do teu jardim?\n";
	std::cin >> l;
	a = FindArea (l, w);
	std::cout << "\n Area tota: " << a << "\t\t";
return 0;

}

int FindArea (int l, int w){
	return l * w;
}
