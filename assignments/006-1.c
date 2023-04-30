#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two integers:\n");
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	if(a > b)
		printf("A is greater than B\n");
	if(a < b)
		printf("B is greater than A\n",b,a);
	return 0;
}
