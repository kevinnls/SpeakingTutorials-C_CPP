#include<iostream>

int main(){
	int a = 5;
	int b = 2;

	float diff = a - b;
	std::cout << "Difference between " << a << " and " << b
		<< "\n\t" << diff << "\n";
	float mod = a%b;
	std::cout << "Modulus operation on " << a << " and " << b
		<< "\n\t" << mod << "\n";
	return 0;
}
