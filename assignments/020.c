#include<stdio.h>

int main() {
	FILE* testfp;
	char test_fpath[] = "TEST";

	char* name;
	char* address;
	char buff;

	testfp = fopen(test_fpath, "w");

	printf("What is your name? ");
	scanf("%s", &name);
	printf("What is your address? ");
	scanf("%s", &address);

	fprintf(testfp, "%s\n%s\n", &name, &address);
	fclose(testfp);
	printf("Saved details to %s\n", test_fpath);

	printf("Reading file %s\n===\n", test_fpath);
	testfp = fopen(test_fpath, "r");
	if(testfp == NULL)
		fprintf(stderr, "File `%s' does not exist!\n", test_fpath);
	else
		while(1){
			buff = getc(testfp);
			if (buff != EOF) putchar(buff);
			else break;
		}
	printf("\n");
	fclose(testfp);
	return 0;
}
