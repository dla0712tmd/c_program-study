#include <stdio.h>

int main(void) {

	int num;

	printf("Please input any number:");
	scanf_s("%d", &num);

	for (int line = 1; line <= num; line++) {

		for (int blank = 1; blank <= num - line; blank++) {

			printf(" ");
		}

		for (int star = 1; star <= line; star++) {

			printf("*");

		}
		printf("\n");
	}



	return 0;




}