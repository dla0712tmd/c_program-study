#include <stdio.h>
int main(void) {

	int year;

	printf("연도를 입력해주세요:");
	scanf_s("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {

		printf("1\n");
	}

	else {
		printf("0\n");
	}






	return 0;
	
}