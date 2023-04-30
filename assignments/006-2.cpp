#include<iostream>

int main() {
	int a, b, c;
	printf("Please enter three integers\n");
	printf("A: ");scanf("%d", &a);
	printf("B: ");scanf("%d", &b);
	printf("C: ");scanf("%d", &c);

	if (a > b && a > c)
		printf("A is the greatest");
	else if (b > a && b > c)
		printf("B is the greatest");
	else
		printf("C is the greatest");
	return 0;
}
