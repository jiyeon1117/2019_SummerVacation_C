#include <stdio.h>

int main(){
	//형 변환
	//자동 형 변환 (묵시적 형 변환, 확대 형 변환)
	//int i;
	//printf("%d \n", 1.6 + 1.8);		//에러 발생

	//i = (int)1.6 + 1.8;
	//printf("%d \n", i);

	//int i;
	//i = 4;
	////printf("%f \n", i);
	//printf("%f \n", (double)i);

	//2개의 정수를 입력받아 평균을 구하기
	/*int a, b;
	double avg;
	a = 10,	b = 9;
	avg = ((double)a + b) / 2;
	printf("평균 = %f \n", avg);*/

	//강제 형 변환을 이용한 반올림
	int x;
	double a, b, c, d;
	a = 19.345;
	c = a;		//c = 19.345;
	b = 12.764;
	d = b;		//d = 12.764;

	//소수 첫째 자리에서 반올림
	/* x = (a + 0.5);		//x = 19
	a = x;					//a = 19.0000
	x = (b + 0.5);		//x = 13
	b = x;					//b = 13.0000
	printf("소수 첫째 자리에서 반올림을 한 경우 : a = %f, b = %f", a, b);*/

	//소수 둘째 자리에서 반올림
	/* x = (c * 10) + 0.5;		//x = 193
	a = (double)x / 10;	//a = 19.3

	x = (d * 10) + 0.5;	//128
	b = (double)x / 10;	//b = 12.8
	printf("소수 둘째 자리에서 반올림을 한 경우 : a = %f, b = %f", a, b); */
	
	//일의 자리에서 반올림 (c = 19.345, d = 12.764)
	/*  = (c / 10) + 0.5;		//x = 2
	a = (double)x * 10;	//a = 20.0000

	x = (d / 10) + 0.5;		//x = 1
	b = (double)x * 10;	//b = 10.0000
	printf("일의 자리에서 반올림을 한 경우 : a = %f, b = %f", a, b);*/

	int n = 235;
	double fl = 5.87;

	printf("d = %d \n", n);
	printf("10d = %10d \n", n);
	printf("-10d = %-10d \n", n);
	printf("010d = %010d \n", n);

	printf("f = %f \n", fl);
	printf("10.2f = %10.2f \n", fl);
	printf("-10.2f = %-10.2f \n", fl);
	printf("010.2f = % 010.2f \n", fl);

	getchar();
	return 0;
}