#include <stdio.h>

int main() {
	int money;
	int m10000, m1000, m100;

	//����ڷκ��� ���� �Է¹޾� ..........money = 28960��
	//���� 2�� õ�� 8�� ��� 9��
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &money);
	getchar();

	m10000 = (money / 10000) ;
	m1000 = (money / 1000) %10;		//(money%10000)/1000;
	m100 = (money / 100) %10;			//(money%10000)/100;

	printf("���� %d��, õ�� %d��, ��� %d��", m10000, m1000, m100);


	getchar();
	return 0;
}