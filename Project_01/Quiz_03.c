#include <stdio.h>
int main() {
	//bmi���ϱ�
	float weight, height, bmi = 0.0;
	printf("Ű�� �Է��ϼ��� (ex : 1.86) : ");
	scanf("%f", &height);

	printf("�����Ը� �Է��ϼ��� (ex : 56.0) : ");
	scanf("%f", &weight);

	bmi = weight / (height*height);
	getchar();

	if (bmi < 20.0f) {
		printf("����� ü���� ������ %f�̰�, ����� ��ü�� �Դϴ�.", bmi);
	}
	else if (bmi >= 20.0f && bmi < 25.0f) {
		printf("����� ü���� ������ %f�̰�, ����� ���� �Դϴ�.", bmi);
	}
	else if (bmi >= 25.0f && bmi < 30.0f) {
		printf("����� ü���� ������ %f�̰�, ����� ��ü�� �Դϴ�.", bmi);
	}
	else {
		printf("����� ü���� ������ %f�̰�, ����� �� �Դϴ�.", bmi);
	}

	getchar();
	return 0;
}