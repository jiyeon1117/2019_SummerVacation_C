#include <stdio.h>
int main() {
	int array[10];
	int seek;
	int flag = 0;

	printf("10���� ���ڸ� �Է��ϼ��� \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}

	printf("ã���� �ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &seek);
	getchar();
	
	printf("*** �Էµ� �ڷ� ��� *** \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	printf("\nã�� ���� ���ڴ� %d�̰�, ", seek);

	for (int i = 0; i < 10; i++) {
		if (array[i] == seek) {
			flag = 1;
			printf("%d�� %d��°�� �ֽ��ϴ�. \n", seek, (i + 1));
			break;
		}
	}

	if (flag == 0) {
		printf("ã���� �ϴ� ���ڰ� �����ϴ�.");
	}

	getchar();
	return 0;
}