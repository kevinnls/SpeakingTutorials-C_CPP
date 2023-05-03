#include<stdio.h>
#include<string.h>

int main() {
	char str1[] = "best";
	char str2[] = "bus";
	char strc[50];
	strcat(strc,str1);
	strcat(strc,str2);
	printf("%s + %s = %s\n", str1,str2,strc);
	return 0;
}
