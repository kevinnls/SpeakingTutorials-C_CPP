#include<stdio.h>

int square(int x){
	return x * x;
}

int main() {
	int num = 3;
	int numsquare = square(num);
	printf("The square of %d is %d\n",num, numsquare);
	return 0;
}
