#include <iostream>

float Convert (float);

int main(){

	float tmpfer, tmpcel;

	std::cout << "Por favor insira a tempatura em fahreinheit: \n";
	std::cin >> tmpfer;
	tmpcel = Convert (tmpfer);

	std::cout << "O valor em celsius e: " << tmpcel << "\n";

}


float Convert(float tmpfer){
	float tmpcel;
	tmpcel = ((tmpfer - 32) * 5 ) /9;
	return tmpcel;
}

