#include <stdio.h>
int main() {
	//��������� ����(+, -, *, /, %)
	//int x = 9;
	//int y = 2;
	//int z;

	//z = x + y;		//9 + 2
	//z = x - y;		//9 - 2
	//z = x * y;		//9 * 2
	//z = x / y;		//9 / 2
	//z = x % y;		//9 % 2

	//z = (x + y) * (x - y);		//(9 + 2) * (9 - 2)
	//z = x + y + 2002;			//9 + 2 + 2002
	//z = 2002 - x - y;			//2002 - 9 - 2

	//prinf("����� = %d \n", z);

	//���������� (++, --)
	//int x = 1;
	//printf("x = %d \n", x++); //1 ��� �� x = 2
	//printf("x = %d \n", x++); //2 ��� �� x = 3
	//printf("x = %d \n", ++x); //4 ��� �� x = 4
	//printf("x = %d \n", x--); //4 ��� �� x = 3
	//printf("x = %d \n", x--); //3 ��� �� x = 2
	//printf("x = %d \n", --x); //1 ��� �� x = 1

	//���迬����(<, >, ==, >=, <=, !=)  =>  �����  true or false
	/*int x = 1;
	int y = 2;
	int z = 3;

	if (x == y) {
		printf("x�� y�� �����ϴ�. \n");
	}
	if (x != y) {
		printf("x�� y�� ���� �ʽ��ϴ�. \n");
	}
	if (x > y) {
		printf("x�� y���� Ů�ϴ�. \n");
	}
	if (x < y) {
		printf("x�� y���� �۽��ϴ�. \n");
	}
	if (y >= z) {
		printf("y�� z���� ũ�ų� �����ϴ�. \n");
	}
	if (y <= z) {
		printf("y�� z���� �۰ų� �����ϴ�. \n");
	}*/

	//�� ������ ���� (||, &&, !)  =>  �����  true or false
	/*int x = 5;
	int y = 2;

	if (x > 0 && y < 10) {
		printf("x�� 0���� ũ��, y�� 10���� ���� ���� �Դϴ�. \n");
	}
	if (x < 0 || y == 2) {
		printf("x�� 0���� �۰ų� �Ǵ� y�� 2�Դϴ�. \n");
	}if (!(x < y)) {
		printf("x�� y���� Ů�ϴ�. \n");
	}*/
	
	//���� ������ ����
	int x = 1;
	int y = 2;
	int max;

	max = (x < y) ? y : x;
	printf("%d�� %d �߿��� �� ū ���� %d�Դϴ�. \n", x, y, max);

	getchar();
	return 0;
}                             