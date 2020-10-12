#include <stdio.h>
int main() {

	//다양한 자료형 표현
	//int price = 35000;
	//double pi = 3.141592;		//float pi = 3.141592f;
	//char c = 'x';
	//char str[20] = "박용규 잘생겼다 !!!";			//char *str = "박용규 잘생겼다 !!!";

	//printf("%d, %f, %c, %s, \n", price, pi, c, str);

	//기본 데이터형의 크기 확인
	//printf("%d : char \n", sizeof(char));
	//printf("%d : short \n", sizeof(short));
	//printf("%d : int \n", sizeof(int));
	//printf("%d : int \n", sizeof(300));
	//printf("%d : long \n", sizeof(long));
	//printf("%d : longlong \n", sizeof(long long));		//8byte = 64bit
	//printf("%d : __int64 \n", sizeof(__int64));
	//printf("%d : long long int \n", sizeof(300LL));

	//print("\n");

	//printf("%d : float \n", sizeof(float));
	//printf("%d : double \n", sizeof(double));
	//printf("%d : long double \n", sizeof(long double));

	/*short sVar = 32000;			//2byte : -32,768 ~ 32.767
	int ivar = -2140000000;		//4byte : -2,147,483,648 ~ 2,147,483,647
	printf("%d %d \n", svar, ivar);

	unsigned short usvar = 65000;			//2byte : 0 ~ 65,535
	unsigned int uivar = 4280000000;		//4byte : 0 ~ 4,294,967,295
	printf("%u %u \n", usvar, uivar);

	long long dist1 = 2720000000000;		//8byte : -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
	__int64 dist2 = 4500000000000;		//8byte : -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

	printf("지구와 천왕성 간의 거리(km) : %lld \n", dist1);
	printf("태양과 해왕성 간의 거리(km) : %lld \n", dist2);

	float x = 3.14f;
	double y = -3.141592;
	long double z = 180000000.0;
	printf("출력값 : %f %f %f \n", x, y, z);*/

	char c1 = 'a';
	char c2 = 65;
	char c3 = '\132';
	char c4 = '\x5A';

	printf("출력값(문자) : %c %c %c %c \n", c1, c2, c3, c4);

	getchar();
	return 0;
}