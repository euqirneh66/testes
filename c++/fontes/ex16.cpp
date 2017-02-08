#include <iostream>
int main(){
	unsigned short small;
	unsigned long large;
	    unsigned long skip;
	    unsigned long target;
		const unsigned short MAXSMALL=65535;
	std::cout << "Enter a small numer: ";
	std::cin >> small;
	std::cout << "enter a large number: ";
	std::cin >> large;
	std::cout << "Enter a skip numer: ";
	std::cin >> skip;
	std::cout << "enter a target number: ";
	std::cin >> target;
std::cout << "\n";
	
	while (small < large && large > 0 && small < MAXSMALL){
		small++;
		if (small % skip == 0)
		{
			std::cout << "skipping on " << small << "\n";
			continue;
		}
		if (large == target)
		{
			std::cout << "Target reached!";
			break;
		}
		large-=2;
	}
	std::cout << "\nSmall: "<< small << " Large: "<<  large << "\n";

return 0;
}	
