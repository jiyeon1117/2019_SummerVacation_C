#include <stdio.h>

int main() {
	//if / switch ����
	int age;
	int choice;
	printf("���� �Է� : ");
	scanf("%d", &age);

	printf("** �����ϴ� �������� �Է��ϼ���. **\n");
	printf("1.���� 2.���� 3.�ϴ� 4.���� \n");
	scanf("%d", &choice);
	getchar();

	age = age / 10;		//age /=10;

	/*if (age >= 5) {
		printf("����� 50�� �̻��̰�, ");
	}else if (age == 4) {
		printf("����� 40���̰�, ");
	}else if (age == 3) {
		printf("����� 30���̰�, ");
	}else if (age == 2) {
		printf("����� 20���̰�, ");
	}else if (age == 1) {
		printf("����� 10���̰�, ");
	}else if (age < 1) {
		printf("����� 10�������̰�, ");
	}else {
		printf("���̸� �ٽ� �Է����ּ���.");
	}

	if (choice == 1) {
		printf("������ �����մϴ�.");
	}else if (choice == 2) {
		printf("������ �����մϴ�.");
	}else if (choice == 3) {
		printf("�ϴϸ� �����մϴ�.");
	}else if (choice == 4) {
		printf("���ϸ� �����մϴ�.");
	}else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}*/

	switch (age)
	{
	case 0:
		printf("����� 10�� �̸��̰�, ");
		break;
	case 1:
		printf("����� 10���̰�, ");
		break;
	case 2:
		printf("����� 20���̰�, ");
		break;
	case 3:
		printf("����� 30���̰�, ");
		break;
	case 4:
		printf("����� 40���̰�, ");
		break;
	default:
		printf("����� 50�� �̻��̰�, ");
		break;
	}

	switch (age)
	{
	case 1:
		printf("������ �����մϴ�. \n");
		break;
	case 2:
		printf("������ �����մϴ�. \n");
		break;
	case 3:
		printf("�ϴϸ� �����մϴ�. \n");
		break;
	case 4:
		printf("���ϸ� �����մϴ�. \n");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�. \n");
		break;
	}









	getchar();
	return 0;
}