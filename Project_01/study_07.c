#include <stdio.h>
int main() {
	int su, result;
	printf("���� �Է� : ");
	scanf("%d", &su);

	/*if (su % 2 == 0) {
		printf("%d�� ¦�� \n", su);
	}else {
		printf("%d�� Ȧ�� \n", su);
	}*/

	//���� ������ (����) ? true : false;
	(su % 2 == 0) ? printf("%d�� ¦�� \n", su) : printf("%d�� Ȧ�� \n", su);

	/*switch (su%2)
	{
	case 0:
		printf("%d�� ¦�� \n", su);
		break;
	case 1: case -1:
		printf("%d�� Ȧ�� \n", su);
		break;
	}*/
	
	




	getchar();
	return 0;
}

