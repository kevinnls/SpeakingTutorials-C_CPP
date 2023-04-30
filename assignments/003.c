#include<stdio.h>

int main(){
	float time = 12;
	float rate = 5;
	float principal = 1000;

	float interest = principal * rate * time / 100;

	printf("Principal:\t₹%.2f\n", principal);
	printf("Interest Rate:\t%.2f%\n", rate);
	printf("Deposit Time:\t%.2f\n", time);
	printf("\n");
	printf("The interest is %.2f\n", interest);

	return 0;
}
