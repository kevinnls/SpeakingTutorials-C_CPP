#include<stdio.h>

int vcube(int x) { x = x * x * x; return x; }
int rcube(int* x) { *x = *x * *x * *x; return *x; }

int main() {
	int n = 2;
	printf("%d^3 = %d", n, vcube(n));
	printf("\n");
	printf("%d^3 = %d | %d", n,rcube(&n),n);
	printf("\n");
	return 0;
}
