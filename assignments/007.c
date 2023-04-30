#include<stdio.h>
int main(){
	int age;
	printf("How old are you? ");
	scanf("%d", &age);

	switch(age/10){

		case 2:
			printf("You are in your 20s\n");
			break;
		case 3:
			printf("You are in your 30s\n");
			break;
		case 4:
			printf("You are in your 40s\n");
			break;
		case 5:
			printf("You are in your 50s\n");
			break;
		case 6:
			if (age == 60){
				printf("You are in your 60s\n");
				break;
			}
		default:
			printf("Invalid age. Cannot be employee\n");
	}
}
