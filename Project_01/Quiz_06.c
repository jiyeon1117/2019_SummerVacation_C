#include <stdio.h>
int main() {
	//���� �����ڸ� �̿��ؼ� ������ ������ �Է¹޾� ���� ū �� ���
	int num1, num2, num3;
	int max = 0;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	getchar();
	

	max = (num1 > num2) ? (num1 > num3) ? num1 : num3 : (num2 > num3) ? num2 : num3;
	printf("%d %d %d �߿��� ���� ū ���� %d�Դϴ�. \n", num1, num2, num3, max);




		

	getchar();
	return 0;
}