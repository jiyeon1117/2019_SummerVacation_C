#include <stdio.h>
#include <stdlib.h>	//rand() �Լ�
#include <time.h>		//time() �Լ�
int main() {
	int c, y;
	int count = 0;
	srand((unsigned int)time(NULL));
	c = rand() % 100 + 1;
	printf("%d", c);

	while (1) {
		count++;
		printf("1~100������ ���ڸ� ���纸���� : ");
		scanf("%d", &y);
		if (y < c) {
			printf("%d���� �� ū ���� �Դϴ�. \n", y);
		}else if (y > c) {
			printf("%d���� �� ���� ���� �Դϴ�. \n", y);
		}
		else {
			getchar();
			printf("�����Դϴ�. \n");
			break;
		}
	}
	printf("�����մϴ�. %d��°�� ���߼̽��ϴ�.", count);

	/*if (count <= 4) {
		printf("")
	}*/
	


	getchar();
	return 0;
}