#include <stdio.h>

int main(){
	//�� ��ȯ
	//�ڵ� �� ��ȯ (������ �� ��ȯ, Ȯ�� �� ��ȯ)
	//int i;
	//printf("%d \n", 1.6 + 1.8);		//���� �߻�

	//i = (int)1.6 + 1.8;
	//printf("%d \n", i);

	//int i;
	//i = 4;
	////printf("%f \n", i);
	//printf("%f \n", (double)i);

	//2���� ������ �Է¹޾� ����� ���ϱ�
	/*int a, b;
	double avg;
	a = 10,	b = 9;
	avg = ((double)a + b) / 2;
	printf("��� = %f \n", avg);*/

	//���� �� ��ȯ�� �̿��� �ݿø�
	int x;
	double a, b, c, d;
	a = 19.345;
	c = a;		//c = 19.345;
	b = 12.764;
	d = b;		//d = 12.764;

	//�Ҽ� ù° �ڸ����� �ݿø�
	/* x = (a + 0.5);		//x = 19
	a = x;					//a = 19.0000
	x = (b + 0.5);		//x = 13
	b = x;					//b = 13.0000
	printf("�Ҽ� ù° �ڸ����� �ݿø��� �� ��� : a = %f, b = %f", a, b);*/

	//�Ҽ� ��° �ڸ����� �ݿø�
	/* x = (c * 10) + 0.5;		//x = 193
	a = (double)x / 10;	//a = 19.3

	x = (d * 10) + 0.5;	//128
	b = (double)x / 10;	//b = 12.8
	printf("�Ҽ� ��° �ڸ����� �ݿø��� �� ��� : a = %f, b = %f", a, b); */
	
	//���� �ڸ����� �ݿø� (c = 19.345, d = 12.764)
	/*  = (c / 10) + 0.5;		//x = 2
	a = (double)x * 10;	//a = 20.0000

	x = (d / 10) + 0.5;		//x = 1
	b = (double)x * 10;	//b = 10.0000
	printf("���� �ڸ����� �ݿø��� �� ��� : a = %f, b = %f", a, b);*/

	int n = 235;
	double fl = 5.87;

	printf("d = %d \n", n);
	printf("10d = %10d \n", n);
	printf("-10d = %-10d \n", n);
	printf("010d = %010d \n", n);

	printf("f = %f \n", fl);
	printf("10.2f = %10.2f \n", fl);
	printf("-10.2f = %-10.2f \n", fl);
	printf("010.2f = % 010.2f \n", fl);

	getchar();
	return 0;
}