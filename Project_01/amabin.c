#include <stdio.h>
int main() {
	//아마스빈에서 음료를 구매하고자 한다.
	//민트초코(3,800), 얼그레이 (3,500), 청포도사과(3,300)를 주문하고
	//각각 신용카드와 현금으로 결재할 때의 금액을 처리하고
	//현금으로 계산하면 거스름돈을 계산해주는 프로그램을 작성
	int mint, tea, apple, money, total, cost;
	int m10000, m5000, m1000, m500, m100;
	char choice;

	printf("안녕하십니까? 아마스빈입니다. \n");
	getch();
	printf("주문을 도와드리겠습니다. \n");
	getch();
	printf("무엇을 주문하시겠습니까? \n");
	
	printf("민트초코(3,800won) : ");
	scanf("%d", &mint);

	printf("얼그레이(3,500won) : ");
	scanf("%d", &tea);

	printf("청포도사과(3,300won) : ");
	scanf("%d", &apple);

	//fflush(stdin);
	while (getchar() != '\n');

	printf("카드로 결재하시겠습니까? (y or n) : ");
	scanf("%c", &choice);
	getchar();

	cost = (3800 * mint) + (3500 * tea) + (3300 * apple);

	if ((choice == 'y') || (choice == 'Y')) {//신용카드 계산
		printf("카드 받았습니다 \n");
		getchar();
		printf("총 %d원 카드 처리 되었습니다. \n", cost);
	}
	else {//현금 계산
		printf("구입하신 금액은 총 %d원 입니다. \n", cost);
		printf("지불할 금액을 적어주세요 : ");
		scanf("%d", &money);
		getchar();

		total = money - cost; //total = 거스름돈
		if (total < 0) {
			printf("잔액이 부족합니다. \n");
			return;
		}
		printf("거스름돈은 %d원입니다.", total);
		getchar();
	
		m10000 = total / 10000;
		m5000 = (total % 10000) / 5000;
		m1000 = ((total % 10000) % 5000) / 1000;
		m500 = (((total % 10000) % 5000) % 1000) / 500;
		m100 = ((((total % 10000) % 5000) % 1000) % 500) / 100;

		printf("만원 %d장, 오천원 %d장, 천원 %d장, 오백원 %d개, 백원 %d개 드리겠습니다. \n", m10000, m5000, m1000, m500, m100);
	}
	printf("사랑합니다. 고객님 안녕하가십시오. ");

	getchar();
	return 0;
}