#include <stdio.h>
#include <stdlib.h>	//rand() 함수
#include <time.h>		//time() 함수
int main() {
	int c, y;
	int count = 0;
	srand((unsigned int)time(NULL));
	c = rand() % 100 + 1;
	printf("%d", c);

	while (1) {
		count++;
		printf("1~100사이의 숫자를 맞춰보세요 : ");
		scanf("%d", &y);
		if (y < c) {
			printf("%d보다 더 큰 숫자 입니다. \n", y);
		}else if (y > c) {
			printf("%d보다 더 작은 숫자 입니다. \n", y);
		}
		else {
			getchar();
			printf("정답입니다. \n");
			break;
		}
	}
	printf("축하합니다. %d번째에 맞추셨습니다.", count);

	/*if (count <= 4) {
		printf("")
	}*/
	


	getchar();
	return 0;
}