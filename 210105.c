#include <stdio.h>

int main() {
	/*int i;//1
	for (i = 0; i < 20; i++) {
		printf("숫자 : %d \n", i);
	}
	int i, sum = 0;//2
	for (i = 0; i < 20; ++i) {
		sum = sum + i;
	}
	printf("1부터 19까지의 합 : %d", sum);
	int i, sum = 0;//3

	for (i = 0; i < 10001; ++i) {
		sum = sum + i;
	}
	printf("1부터 10000까지의 합 : %d \n", sum);
	//몇개의 과목을 평균을 낼지 과목수를 입력받고 과목 점수를 입력하여 평균을 내라
	int i;//3
	int score, subject;
	double sum_score = 0;

	printf("몇개의 과목을 입력받을 것인가?");
	scanf_s("%d", &subject);

	printf("\n과목의 점수를 입력해주세요\n");
	for (i = 1; i <= subject; i++) {
		printf("과목 %d : ", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);
	int usranswer;//4

	printf("컴퓨터가 생각하는 숫자를 맞춰보세요!!\n");
	for (;;) {// (;;)는 조건이 항상 참, 무한히 중괄호 내용 실행
		scanf_s("%d", &usranswer);
		if (usranswer == 3) {
			printf("맞추셨군요!\n");
			break;//위 조건식에 상관없이 실행되기만 하면 for문 탈출
		}
		else {
			printf("틀리셨습니다\n");
		}
	}
	for (;;) {//5
		printf("a");
		break;
	}
	int i;
	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;//괄호안에 조건식 패스

		printf(" %d ", i);
	}
	int i, j;//6 구구단

	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {//i는 변하지 않고 j만 돌아가다가 끝나면 다시 위로 올라가서 내려온다
			printf(" %d x %d = %d \n", i, j, i * j);
		}
	}
	int i, j;//7

	for (i = 1; i < 10; i++) {
		for (j = 1; j < i; j++) {
			printf(" %d ", j);
		}
	}
	int i = 1, sum = 0//8

	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1부터 100까지의 합 = %d \n", sum);
	int i = 1, sum = 0;//9

	do {
		sum += i;
		i++;
	} while (i < 1);

	printf(" sum : %d \n", sum); */
	/*생각해보기 문제*/
	//피라밈드 만들기
	/*char star = '*';
	char blank = ' ';
	int i, j, b, line;

	printf("몇줄의 피라미드를 만들 것인가? : ");
	scanf_s("%d", &line);

	for (i = 1; i <= line; i++) {//i는 행
		for (b = 1; b <= line - i; b++) {//b는 공백을 반복해서 찍을 개수
			printf("%c", blank);
		}for (j = 1; j <= 2 * i - 1; j++) {//행에 따른 j는 별의 개수
			printf("%c", star);
		}
		printf("\n");
	}
	printf("\n");*/
    int i, j, a, line;
	char star = '*';
	char blank = ' ';

	printf("역삼각형 모양의 피라미드를 몇줄로 만들건가요? : ");
    scanf_s("%d", &line);
	for (i = 1; i <= line; i++) {
		for (j = 1; j <= 2*i; j++) {
			printf("%c", star);
		}	for (a = 1; a <= line - i; a++) {
					printf("%c", blank);
				}
			printf("\n");
		}printf("\n");

	

	return 0;
}

