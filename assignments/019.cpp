#include<iostream>

int cube(int x){return x * x * x;}

int main() {
	int n;
	std::cout << "CUBER\n"
		<< "Enter number to cube: ";
	std::cin >> n;
	std::cout << n << "^3 = " << cube(n) << "\n";
	return 0;
}
