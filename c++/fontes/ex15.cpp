#include <iostream>
int main(){
	unsigned short small;
	unsigned long large;
		const unsigned short MAXSMALL=65535;
	std::cout << "Enter a smll numer: ";
	std::cin >> small;
	std::cout << "enter a large number: ";
	std::cin >> large;
	
		std::cout << "smal:" << small << "...";
	
	while ( small < large && large > 0 && small < MAXSMALL){
		if(small % 5000 == 0 )
			std::cout << ".";
		small++;
		large-=2;
	}
	
	std::cout << "\n Small : "<< small << " Large: " << large << "\n" ;

return 0;
}




