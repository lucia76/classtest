#include <stdio.h>

int main() {
//Q1.삼각형 피라미드
	/*int i, j, a, line;
	char star = '*';
	char blank = ' ';

	printf("몇 행의 피라미드를 만들 건가요? : ");
	scanf_s("%d", &line);

	for (i = 1; i <= line; i++) {
		for (a = 1; a <= line - i; a++) {
			printf("%c", blank);
		}for (j = 1; j <= 2 * i - 1; j++) {
			printf("%c", star);
		}printf("\n");
	}printf("\n");*/
//Q2.역삼각형 피라미드
//Q3. 1000이하의 3또는 5의 배수인 자연수들의 합을 구한다
	/*int i, sum = 0;

	for (i = 1; i <= 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}printf("%d", sum);*/
//Q4.1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
//Q5.사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.
	/*int i, num, m = 1;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		m = m * i;
	}printf("1부터 %d까지의 곱은 %d 입니다", num, m);*/
//Q6.자연수 a,b,c 의 개수를 구하여라

	//i) a + b + c = 2000
	//ii) a ＞ b > c, a, b, c 는 모두 자연수
	/*int a, b, c;
	int count = 0;
	int succes = 0; 
	for (a = 1; a <= 1997; a++) {
		for (b = 2; b < a; b++) {
			for (c = 1; c < b; c++) {
				if (a + b + c == 2000)
					count++;//count?? 함순가??처음에 그냥 변수명으로 썼다가 답에 이렇게 되있어서 해봄 뭐징
			}
		}
	}printf("%d", count);//함수는 아직 안배웠는데 다른 방법은 없나...*/
//Q7 임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라.예를 들어서 N = 18 일 경우
//ex)N = 18 18 = 2 * 3 * 3
	int i;
	int num;

	printf("입력받을 값을 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <=num; i++) {
		if (num % 2 == 0) {
			printf("2 \n");
		}
		if (num % 3 == 0) {
			printf("3 \n");
		}
		if (num % 5 == 0) {
			printf("5 \n");
		}break;
	}

//Q8.문제 7 에서 만든 프로그램의 속도를 향상 시킬 수 있는 방법은 없을까 ? 큰 수를 빠르게 소인수분해 할 수 있는 방법들을 찾아 프로그램에 적용시켜 보아라.
//예를 들어서 N 의 제곱근 이하의 정수들만 처리한다던지,
	return 0;
}