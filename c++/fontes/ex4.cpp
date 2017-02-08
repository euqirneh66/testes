#include <iostream>

int Add(int x, int y){
	std::cout << "Na funcao Add(), recebendo " << x << " e " << y << "\n";
	return (x+y);
}

int main(){
	std::cout << "Iniciando a funcao\n";
	int a, b, c;
	std::cout << "Insira dois numeros:";
	std::cin >> a;
	std::cin >> b;
	std::cout << "Chamada da funcao Add:\n";
	c=Add(a,b);
	std::cout << " ------------------\n\
		A soma ficou : " << c << " \
		\n ------------------ \n \n";
	std::cout << "Tchau!!! \n\n";
return 0;
}
