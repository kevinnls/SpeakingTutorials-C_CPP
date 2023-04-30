#include<stdio.h>

int main(){
	int a,b,c,d;
	printf("We will calculate\n\t(a/b) + (c/d)\n");
	printf("What is a? ");scanf("%d",&a);
	printf("What is b? ");scanf("%d",&b);
	printf("What is c? ");scanf("%d",&c);
	printf("What is d? ");scanf("%d",&d);

	float result = (float)a/b + (float)c/d;
	printf("Evaluated expression is\n\t%.2f\n", result);
	return 0;
}
