#include <stdio.h>
int main() {
	int num;
	printf("6자리 정수를 입력세요 : ");
	scanf("%d", &num);
	getchar();

	int num1 = num / 1000;
	int num2 = num % 1000;
	printf("%d,%d", num1, num2);

	getchar();
	return 0;
}