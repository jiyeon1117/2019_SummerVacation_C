#include <stdio.h>

int main() {
	//1���� 1000������ ���� �߿��� 4�� ����̸鼭 9�� ����� �Ǵ� ��� �� ����
	int count = 0;
	int sum = 0;
	for (int i = 1;  i<= 1000; i++)
	{
		if (i % 4 == 0 && i % 9 == 0) {
			count++;
			printf("%d  ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("���� %d�̰�, ������ %d�̴�.", sum, count);
		
	getchar();
	return 0;
}