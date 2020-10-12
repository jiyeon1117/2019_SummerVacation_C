#include <stdio.h>
#include <stdlib.h>	//rand() 함수 사용하기 위해 해더 추가
#include <time.h>		//time() 함수 사용하기 위해 해더 추가
int main() {
	//난수 발생 정리
	
	//1단계 : 실핼할 때마다 같은 값이 난수로 발생
	/*printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/

	//2단계: srand(시드값)을 이용하여 난수 발생
	/*srand(45);
	printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/

	//3단계 : 시간을 이용해서 난수 발생
	/*srand((unsigned int)time(NULL));
	printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/

	//1에서 45사이의 임의의 숫자 6개 발생
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 6; i++) {
		int lotto = rand() % 45 + 1;
		printf("%d \n", lotto);
	}

	getchar();
	return 0;
}