#include <stdio.h>
#define PI 3.141592
int main() {

	//int su;

	//printf("���� �Է� : ");
	//scanf("%d", &su);
	////scanf_s("%d", &su);

	//printf("�Է��� ������ %d �Դϴ�", su);

	//���� 1 ���� �������� �Է¹޾�, ���� ���̿� �ѷ��� ���Ͻÿ�.
	int r;
	double area, round;

	printf("���� �������� �Է��ϼ��� : ");
	scanf("%d", &r);
	
	area = r * r* PI;
	round = 2 * r * PI;
	printf("���� ���̴� %f �̰�, ���� �ѷ��� %f �Դϴ�. \n", area, round);

	//���� 2 �簢���� ���ο� ���θ� �Է¹޾� ���̸� ���Ͻÿ�.
	int width, height;
	printf("�簢���� ���θ� �Է��ϼ��� : ");
	scanf("%d", &width);

	printf("�簢���� ���θ� �Է��ϼ��� : ");
	scanf("%d", &height);

	printf("�簢���� ���� : %d\n", (width*height));

	getchar();
	return 0;
}