#include <stdio.h>
int main() {
	//삼항 연산자만 이용해서 세개의 정수를 입력받아 가장 큰 수 출력
	int num1, num2, num3;
	int max = 0;
	printf("세 개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	getchar();
	

	max = (num1 > num2) ? (num1 > num3) ? num1 : num3 : (num2 > num3) ? num2 : num3;
	printf("%d %d %d 중에서 가장 큰 수는 %d입니다. \n", num1, num2, num3, max);




		

	getchar();
	return 0;
}