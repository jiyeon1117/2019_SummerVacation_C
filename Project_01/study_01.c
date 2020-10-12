#include <stdio.h>
#define PI 3.141592
int main() {
	//puts("Hello C");			//System.out.println("String");
	//puts("안녕하세요 C");

	//printf("Hello C \n");
	//printf("안녕하세요 C \n");

	/*int a = 18;
	printf("내 나이는 %d세 입니다. \n", a);
	puts("내 나이는 %d세 입니다. \n", a);*/

	//변수 설명
	/*int x;
	int y, z;
	x = 2;
	y = 3;
	z = x + y;
	printf("%d \n", z);
	printf("%d \n", (x + y));
	y = 10;
	printf("%d \n", (x + y));*/

	//상수 설명
	//double r = 5.0f; //r = 반지름 가정
	//printf("원의 넓이는 %f 입니다. \n", (r * r * 3.14));

	//상수 #define 사용
	double r = 5.0;
	printf("원의 넓이는 %f 입니다. \n", (r * r * PI));


	getchar();
	return 0;
}
//ctrl + k + c 주석
//ctrl + k + u 주석해제