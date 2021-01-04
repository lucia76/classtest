#include <stdio.h>

int main() {
	int i;//1
	printf("입력하고 싶은 숫자를 입력해주세요 : ");
	scanf_s("%d", &i);

	if (i == 7) {
		printf("당신은 행운의 숫자 7을 입력했습니다");
	}
	else {
		printf("당신은 %d를 좋아하는 군요!", i);// 오오 성공ㅎ
	}
	double i, j;//2
	printf("나누려는 두 수를 입력해주세요 :");
	scanf_s("%lf %lf", &i, &j);
	if (j == 0) {
		printf("0으로는 나눌 수 없습니다");
		return 0;

	}
	printf("%f와 %f로 나눈 결과 값은 %.2f \n", i, j, i / j);
	
	int score;//3

	printf("당신의 수학점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("당신은 합격입니다!\n");
	}
	else {
		printf("당신은 불합격입니다\n");
	}
	
	int num1, num2;//4

	printf("비교할 두 수를 입력해주세요 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		printf("%d는 %d보다 큽습니다", num1, num2);
	}if (num1 < num2) {
		printf("%d는 %d보다 작습니다", num1, num2);
	}if (num1 >= num2) {
		printf("%d는 %d보다 크거나 같습니다", num1, num2);
	}if (num1 <= num2) {
		printf("%d는 %d보다 작거나 같습니다", num1, num2);
	}if (num1 == num2) {
		printf("%d는 %d와 같습니다", num1, num2);
	}if (num1 != num2) {
		printf("%d와 %d는 다릅니다", num1, num2);
	}
	int num;//5
	printf("아무숫자나 입력해보세요 : ");
	scanf_s("%d", &num);

	if (num == 7) {
		printf("7은 행운의 숫자에요!!");//if 
	}else if (num == 13) {
		printf("13은 내가 좋아하는 숫자에요");
	}
	else if (num == 4) {
			printf("4는 죽음의 숫자 ㄷㄷ");
		}
	else {
			printf("평범한 숫자 %d ㅇㅇ", num);
		}
	float ave_score;//6
	float math, english, science, programming;

	printf("각 과목의 시험점수를 알려주세요 : ");
	scanf_s("%f %f %f %f", &math, &english, &science, &programming);

	ave_score = (math + english + science + programming) / 4;

	if (ave_score >= 90) {
		printf("평균 %.1f!! 당신은 우등생입니다", ave_score);
	}
	else if (ave_score >= 60) {
		printf("평균 %.1f!! 좀 더 노력하세요", ave_score);
	} 
	else {
		printf("평균 %.1f!! 공부를 발로 한 듯 ㅇㅇ", ave_score);
	}
	
	int height, weight;//7
	printf("당신의 키와 몸무게를 알려주세요 : ");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("당신은 거구 입니다 \n");
	}if (!(height >= 190 || weight >= 100)) {
		printf("당신은 거구가 아닙니다 \n");
	}


	return 0;
}