#include <stdio.h>
#define PI 3.141592
int main() {
	//puts("Hello C");			//System.out.println("String");
	//puts("�ȳ��ϼ��� C");

	//printf("Hello C \n");
	//printf("�ȳ��ϼ��� C \n");

	/*int a = 18;
	printf("�� ���̴� %d�� �Դϴ�. \n", a);
	puts("�� ���̴� %d�� �Դϴ�. \n", a);*/

	//���� ����
	/*int x;
	int y, z;
	x = 2;
	y = 3;
	z = x + y;
	printf("%d \n", z);
	printf("%d \n", (x + y));
	y = 10;
	printf("%d \n", (x + y));*/

	//��� ����
	//double r = 5.0f; //r = ������ ����
	//printf("���� ���̴� %f �Դϴ�. \n", (r * r * 3.14));

	//��� #define ���
	double r = 5.0;
	printf("���� ���̴� %f �Դϴ�. \n", (r * r * PI));


	getchar();
	return 0;
}
//ctrl + k + c �ּ�
//ctrl + k + u �ּ�����