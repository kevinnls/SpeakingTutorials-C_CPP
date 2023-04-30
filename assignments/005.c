#include<stdio.h>

int x = 5;
int y = 135;

int diff(int a, int b){
	return a - b;
}
int main() {
	int difference = diff(x,y);
	printf("Difference between %d and %d is: %d", x, y, difference);
}
