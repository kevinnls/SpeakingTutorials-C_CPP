#include<iostream>
#include<string.h>

struct emp {
	std::string name;
	std::string address;
	std::string designation;
	float salary;
};
int main() {
	struct emp person;
	person.name = "John Doe";
	person.address = "221B, Baker Street";
	person.designation = "Employee";
	person.salary = 50000.00;

	std::cout << "Employee Details\n\n"
		<< "NAME:\t\t" << person.name <<"\n"
		<< "ADDRESS:\t" << person.address <<"\n"
		<< "DESIGNATION:\t" << person.designation <<"\n"
		<< "SALARY:\t\t" << person.salary <<"\n";
}
