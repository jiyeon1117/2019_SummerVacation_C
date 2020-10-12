#include <stdio.h>
int main() {
	int array[10];
	int seek;
	int flag = 0;

	printf("10개의 숫자를 입력하세요 \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}

	printf("찾고자 하는 숫자를 입력하세요 : ");
	scanf("%d", &seek);
	getchar();
	
	printf("*** 입력된 자료 출력 *** \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	printf("\n찾고 싶은 숫자는 %d이고, ", seek);

	for (int i = 0; i < 10; i++) {
		if (array[i] == seek) {
			flag = 1;
			printf("%d는 %d번째에 있습니다. \n", seek, (i + 1));
			break;
		}
	}

	if (flag == 0) {
		printf("찾고자 하는 숫자가 없습니다.");
	}

	getchar();
	return 0;
}