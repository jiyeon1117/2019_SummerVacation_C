#include <stdio.h>
#include <stdlib.h>	//rand() �Լ� ����ϱ� ���� �ش� �߰�
#include <time.h>		//time() �Լ� ����ϱ� ���� �ش� �߰�
int main() {
	//���� �߻� ����
	
	//1�ܰ� : ������ ������ ���� ���� ������ �߻�
	/*printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/

	//2�ܰ�: srand(�õ尪)�� �̿��Ͽ� ���� �߻�
	/*srand(45);
	printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/

	//3�ܰ� : �ð��� �̿��ؼ� ���� �߻�
	/*srand((unsigned int)time(NULL));
	printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/

	//1���� 45������ ������ ���� 6�� �߻�
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 6; i++) {
		int lotto = rand() % 45 + 1;
		printf("%d \n", lotto);
	}

	getchar();
	return 0;
}