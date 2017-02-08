#include <iostream>

int Doubler (int a);

int main(){
	int result = 0, input;
	
	std::cout << "Entre com um numero de 0 a 10000: ";
	std::cin >> input;

	std::cout << "\n Antes da funcao os valores sao: \n";
	std::cout <<"\n input:" << input << " double: "<< result << "\n";

	result = Doubler(input);

	std::cout <<"\n Depois da funcao: ";
	std::cout <<"\n input:" << input << " double: "<< result << "\n";
	
return 0;
}


int Doubler(int original){
	if(original <= 10000)
		return original * 2;	
	else
		return -1;
	std::cout << "Voce nao pode estar aqui";
}

