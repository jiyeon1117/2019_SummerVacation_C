#include <stdio.h>
int main() {
	//�Ƹ����󿡼� ���Ḧ �����ϰ��� �Ѵ�.
	//��Ʈ����(3,800), ��׷��� (3,500), û�������(3,300)�� �ֹ��ϰ�
	//���� �ſ�ī��� �������� ������ ���� �ݾ��� ó���ϰ�
	//�������� ����ϸ� �Ž������� ������ִ� ���α׷��� �ۼ�
	int mint, tea, apple, money, total, cost;
	int m10000, m5000, m1000, m500, m100;
	char choice;

	printf("�ȳ��Ͻʴϱ�? �Ƹ������Դϴ�. \n");
	getch();
	printf("�ֹ��� ���͵帮�ڽ��ϴ�. \n");
	getch();
	printf("������ �ֹ��Ͻðڽ��ϱ�? \n");
	
	printf("��Ʈ����(3,800won) : ");
	scanf("%d", &mint);

	printf("��׷���(3,500won) : ");
	scanf("%d", &tea);

	printf("û�������(3,300won) : ");
	scanf("%d", &apple);

	//fflush(stdin);
	while (getchar() != '\n');

	printf("ī��� �����Ͻðڽ��ϱ�? (y or n) : ");
	scanf("%c", &choice);
	getchar();

	cost = (3800 * mint) + (3500 * tea) + (3300 * apple);

	if ((choice == 'y') || (choice == 'Y')) {//�ſ�ī�� ���
		printf("ī�� �޾ҽ��ϴ� \n");
		getchar();
		printf("�� %d�� ī�� ó�� �Ǿ����ϴ�. \n", cost);
	}
	else {//���� ���
		printf("�����Ͻ� �ݾ��� �� %d�� �Դϴ�. \n", cost);
		printf("������ �ݾ��� �����ּ��� : ");
		scanf("%d", &money);
		getchar();

		total = money - cost; //total = �Ž�����
		if (total < 0) {
			printf("�ܾ��� �����մϴ�. \n");
			return;
		}
		printf("�Ž������� %d���Դϴ�.", total);
		getchar();
	
		m10000 = total / 10000;
		m5000 = (total % 10000) / 5000;
		m1000 = ((total % 10000) % 5000) / 1000;
		m500 = (((total % 10000) % 5000) % 1000) / 500;
		m100 = ((((total % 10000) % 5000) % 1000) % 500) / 100;

		printf("���� %d��, ��õ�� %d��, õ�� %d��, ����� %d��, ��� %d�� �帮�ڽ��ϴ�. \n", m10000, m5000, m1000, m500, m100);
	}
	printf("����մϴ�. ���� �ȳ��ϰ��ʽÿ�. ");

	getchar();
	return 0;
}