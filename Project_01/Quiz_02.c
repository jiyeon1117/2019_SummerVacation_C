#include <stdio.h>

int main() {
	//1에서 1000사이의 숫자 중에서 4의 배수이면서 9의 배수가 되는 모든 수 츨력
	int count = 0;
	int sum = 0;
	for (int i = 1;  i<= 1000; i++)
	{
		if (i % 4 == 0 && i % 9 == 0) {
			count++;
			printf("%d  ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("합은 %d이고, 개수는 %d이다.", sum, count);
		
	getchar();
	return 0;
}