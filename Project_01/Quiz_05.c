#include <stdio.h>
int main() {
	int num;
	printf("6�ڸ� ������ �Է¼��� : ");
	scanf("%d", &num);
	getchar();

	int num1 = num / 1000;
	int num2 = num % 1000;
	printf("%d,%d", num1, num2);

	getchar();
	return 0;
}