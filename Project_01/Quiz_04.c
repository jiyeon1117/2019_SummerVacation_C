#include <stdio.h>

int main() {
	int money;
	int m10000, m1000, m100;

	//사용자로부터 돈을 입력받아 ..........money = 28960원
	//만원 2장 천원 8장 백원 9개
	printf("돈을 입력하세요 : ");
	scanf("%d", &money);
	getchar();

	m10000 = (money / 10000) ;
	m1000 = (money / 1000) %10;		//(money%10000)/1000;
	m100 = (money / 100) %10;			//(money%10000)/100;

	printf("만원 %d장, 천원 %d장, 백원 %d개", m10000, m1000, m100);


	getchar();
	return 0;
}