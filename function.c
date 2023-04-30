#include<stdio.h>

int add(int a, int b){
	// last operation on formal params
	// is returned automatically
	int c = a + b;
}

int main() {
	int sum = add(4,5);
	printf("Sum is %d", sum);
	return 0;
}
