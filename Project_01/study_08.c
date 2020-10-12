#include <stdio.h>
int main() {
	//산술연산자 정리(+, -, *, /, %)
	//int x = 9;
	//int y = 2;
	//int z;

	//z = x + y;		//9 + 2
	//z = x - y;		//9 - 2
	//z = x * y;		//9 * 2
	//z = x / y;		//9 / 2
	//z = x % y;		//9 % 2

	//z = (x + y) * (x - y);		//(9 + 2) * (9 - 2)
	//z = x + y + 2002;			//9 + 2 + 2002
	//z = 2002 - x - y;			//2002 - 9 - 2

	//prinf("결과값 = %d \n", z);

	//증감연산자 (++, --)
	//int x = 1;
	//printf("x = %d \n", x++); //1 출력 후 x = 2
	//printf("x = %d \n", x++); //2 출력 후 x = 3
	//printf("x = %d \n", ++x); //4 출력 후 x = 4
	//printf("x = %d \n", x--); //4 출력 후 x = 3
	//printf("x = %d \n", x--); //3 출력 후 x = 2
	//printf("x = %d \n", --x); //1 출력 후 x = 1

	//관계연산자(<, >, ==, >=, <=, !=)  =>  결과값  true or false
	/*int x = 1;
	int y = 2;
	int z = 3;

	if (x == y) {
		printf("x는 y와 같습니다. \n");
	}
	if (x != y) {
		printf("x는 y와 같지 않습니다. \n");
	}
	if (x > y) {
		printf("x는 y보다 큽니다. \n");
	}
	if (x < y) {
		printf("x는 y보다 작습니다. \n");
	}
	if (y >= z) {
		printf("y는 z보다 크거나 같습니다. \n");
	}
	if (y <= z) {
		printf("y는 z보다 작거나 같습니다. \n");
	}*/

	//논리 연산자 정리 (||, &&, !)  =>  결과값  true or false
	/*int x = 5;
	int y = 2;

	if (x > 0 && y < 10) {
		printf("x는 0보다 크고, y는 10보다 작은 숫자 입니다. \n");
	}
	if (x < 0 || y == 2) {
		printf("x는 0보다 작거나 또는 y는 2입니다. \n");
	}if (!(x < y)) {
		printf("x가 y보다 큽니다. \n");
	}*/
	
	//삼항 연산자 정리
	int x = 1;
	int y = 2;
	int max;

	max = (x < y) ? y : x;
	printf("%d와 %d 중에서 더 큰 수는 %d입니다. \n", x, y, max);

	getchar();
	return 0;
}                             