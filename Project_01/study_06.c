#include <stdio.h>

int main() {
	//if / switch 정리
	int age;
	int choice;
	printf("나이 입력 : ");
	scanf("%d", &age);

	printf("** 좋아하는 연예인을 입력하세요. **\n");
	printf("1.수지 2.설현 3.하니 4.은하 \n");
	scanf("%d", &choice);
	getchar();

	age = age / 10;		//age /=10;

	/*if (age >= 5) {
		printf("당신은 50대 이상이고, ");
	}else if (age == 4) {
		printf("당신은 40대이고, ");
	}else if (age == 3) {
		printf("당신은 30대이고, ");
	}else if (age == 2) {
		printf("당신은 20대이고, ");
	}else if (age == 1) {
		printf("당신은 10대이고, ");
	}else if (age < 1) {
		printf("당신은 10대이하이고, ");
	}else {
		printf("나이를 다시 입력해주세요.");
	}

	if (choice == 1) {
		printf("수지를 좋아합니다.");
	}else if (choice == 2) {
		printf("설현을 좋아합니다.");
	}else if (choice == 3) {
		printf("하니를 좋아합니다.");
	}else if (choice == 4) {
		printf("은하를 좋아합니다.");
	}else {
		printf("잘못 입력하셨습니다.");
	}*/

	switch (age)
	{
	case 0:
		printf("당신은 10대 미만이고, ");
		break;
	case 1:
		printf("당신은 10대이고, ");
		break;
	case 2:
		printf("당신은 20대이고, ");
		break;
	case 3:
		printf("당신은 30대이고, ");
		break;
	case 4:
		printf("당신은 40대이고, ");
		break;
	default:
		printf("당신은 50대 이상이고, ");
		break;
	}

	switch (age)
	{
	case 1:
		printf("수지를 좋아합니다. \n");
		break;
	case 2:
		printf("설현을 좋아합니다. \n");
		break;
	case 3:
		printf("하니를 좋아합니다. \n");
		break;
	case 4:
		printf("은하를 좋아합니다. \n");
		break;
	default:
		printf("잘못 입력하셨습니다. \n");
		break;
	}









	getchar();
	return 0;
}