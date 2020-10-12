#include <stdio.h>
#include <stdlib.h>	//rand() �Լ�
#include <time.h>		//time() �Լ�
int main() {
	int c1, c2, c3, c4, c5, c6;
	int index, temp;
	int lotto
	srand((unsigned int)time(NULL));
	c1 = rand() % 45 + 1;

	/*do {
		c2 = rand() % 45 + 1;
	} while (c1 == c2);*/

	do {
		c2 = rand() % 45 + 1;
	} while (c1 == c2);

	do {
		c3 = rand() % 45 + 1;
	} while (c1 == c3 || c2 == c3);

	do {
		c4 = rand() % 45 + 1;
	} while (c1 == c4 || c2 == c4 || c3 == c4);

	do {
		c5 = rand() % 45 + 1;
	} while (c1 == c5 || c2 == c5 || c3 == c5 || c4 == c5);

	do {
		c6 = rand() % 45 + 1;
	} while (c1 == c6 || c2 == c6 || c3 == c6 || c4 == c6 || c5 == c6);

	printf("%d %d %d %d %d %d", c1, c2, c3, c4, c5, c6);


	lotto[0] = c1;
	lotto[1] = c2;
	lotto[2] = c3;
	lotto[3] = c4;
	lotto[4] = c5;
	lotto[5] = c6;

	//�ſ��߿�
	for (int i = 0; i < 5; i++) {
		index = i;
		for (int j = i + 1; j < 6; j++) {
			if (lotto[index] > lotto[j]) {
				index = j;
			}	
		}
		temp = lotto[i];
		lotto[i] = lotto[index];
		lotto[index] = temp;
	}
	//Ű����Ʈ


	printf("�������� ������ ����� ���ڴ� : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}
	printf("�Դϴ�. \n");


	getchar();
	return 0;
}