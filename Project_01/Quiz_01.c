#include <stdio.h>
#define PI 3.141592
int main() {

	//int su;

	//printf("정수 입력 : ");
	//scanf("%d", &su);
	////scanf_s("%d", &su);

	//printf("입력한 정수는 %d 입니다", su);

	//퀴즈 1 원의 반지름을 입력받아, 원의 넓이와 둘레를 구하시오.
	int r;
	double area, round;

	printf("원의 반지름을 입력하세요 : ");
	scanf("%d", &r);
	
	area = r * r* PI;
	round = 2 * r * PI;
	printf("원의 넓이는 %f 이고, 원의 둘레는 %f 입니다. \n", area, round);

	//퀴즈 2 사각형의 가로와 세로를 입력받아 넓이를 구하시오.
	int width, height;
	printf("사각형의 가로를 입력하세요 : ");
	scanf("%d", &width);

	printf("사각형의 세로를 입력하세요 : ");
	scanf("%d", &height);

	printf("사각형의 넓이 : %d\n", (width*height));

	getchar();
	return 0;
}