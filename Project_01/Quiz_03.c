#include <stdio.h>
int main() {
	//bmi구하기
	float weight, height, bmi = 0.0;
	printf("키를 입력하세요 (ex : 1.86) : ");
	scanf("%f", &height);

	printf("몸무게를 입력하세요 (ex : 56.0) : ");
	scanf("%f", &weight);

	bmi = weight / (height*height);
	getchar();

	if (bmi < 20.0f) {
		printf("당신의 체질량 지수는 %f이고, 결과는 저체중 입니다.", bmi);
	}
	else if (bmi >= 20.0f && bmi < 25.0f) {
		printf("당신의 체질량 지수는 %f이고, 결과는 정상 입니다.", bmi);
	}
	else if (bmi >= 25.0f && bmi < 30.0f) {
		printf("당신의 체질량 지수는 %f이고, 결과는 과체중 입니다.", bmi);
	}
	else {
		printf("당신의 체질량 지수는 %f이고, 결과는 비만 입니다.", bmi);
	}

	getchar();
	return 0;
}