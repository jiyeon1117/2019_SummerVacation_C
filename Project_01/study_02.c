#include <stdio.h>

int main() {

	//다양한 진법
	//int a = 30;
	//printf("10진수 = %d \n", a);
	//printf("8진수 = %o \n", a);		//o = octal
	//printf("16진수 = %x \n", a);		//x = hex
	//printf("16진수 = %X \n", a);		//x = hex

	//문자열
	//char str1 = 'C';
	//char str2[20] = "C언어";
	//char* str3 = "C언어";		//*포인터 - call by reference
	//
	//printf("C언어는 재미있다. \n");
	//printf("%s는 재미있다. \n", "C언어");

	//printf("%c는 재미있다. \n", str1);
	//printf("%s는 재미있다. \n", str2);
	//printf("%s는 재미있다. \n", str3);

	/*int age;
	printf("당신의 나이는? ");
	scanf("%d", &age);
	printf("당신은 %d살 입니다.", age);*/

	//정수 두 개를 입력받아 합을 구하는 프로그램
	/*int a, b;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("정수를 입력하세요 : ");
	scanf("%d", &b);
	int sum = a + b;
	printf("합계 : %d", sum);*/

	/*int su1, su2;
	printf("정수 두 개를 입력하세요 : ");
	scanf("%d %d", &su1, &su2);
	printf("두 수의 합은 %d입니다. \n", (su1 + su2));*/

	/*char c, str[20];
	printf("영문 이름 첫 글자는 ? ");
	scanf("%c", &c);
	printf("이름은 ? ");
	scanf("%s", str);
	printf("당신의 영문 이름 첫 글자는 %c이고, 한글 이름은 %s 입니다. \n", c, str);*/

	/*char str1[20], str2[20], str3[20];
	printf("좋아하는 연예인 이름 3명 입력 : ");
	scanf("%s %s %s", str1, str2, str3);
	printf("당신이 좋아하는 연예인은 %s, %s, %s 입니다.", str1, str2, str3);*/

	//char name[20]과 char *name 비교
	/*char name[20];
	char* name2;

	printf("이름 : ");
	scanf("%s", &name);
	
	printf("이름 : ");
	name2 = malloc(100);
	scanf("%s", &name2);*/

	/*int number;
	char name[20];
	float grade;

	printf("학번 : ");
	scanf("%d", &number);

	printf("학번 : ");
	scanf("%s", name);

	printf("학번 : ");
	scanf("%f", &grade);

	printf("%d %s 학생의 학점은  %f입니다 \n", number, name, grade);*/


	getchar();
	return 0;
}