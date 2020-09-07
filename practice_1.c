#include <stdio.h>

int cul_A(int x, int y);
int cul_C(int x, int y);
int cul_M(int x, int y);
int cul_D(int x, int y);
int cul_N(int x, int y);
int main(void) {

	int x, y;

	printf("두 숫자를 입력해주세요:");
	scanf_s("%d %d", &x, &y);


	printf("%d %d %d %d %d", cul_A(x, y), cul_C(x, y), cul_M(x, y), cul_D(x, y), cul_N(x, y));
		




	return 0;

}

int cul_A(int x, int y) {

	return x + y;

}

int cul_C(int x, int y) {

	return x - y;

}

int cul_M(int x, int y) {

	return x * y;

}

int cul_D(int x, int y) {

	return x / y;

}

int cul_N(int x, int y) {

	return x % y;

}