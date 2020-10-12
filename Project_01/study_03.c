#include <stdio.h>

void hello() {
	printf("hello() 함수 호출 \n");
}

int main() {
	printf("함수 호출 전 출력 \n");
	hello();
	printf("함수 호출 후 출력 \n");
	
	getchar();
	return 0;
}

