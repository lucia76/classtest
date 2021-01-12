#include <stdio.h>

int main() {
	//Q3.1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.
	/*int i, sum = 0;
	for (i = 1; i <= 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}printf("%d", sum);*/
	//Q5.사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.
	/*int i, N, sum = 1;
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++) {
		sum = sum * i;
	}printf("%d", sum);*/
	//Q1.N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.
	/*int i, j, b, N = 1;
	char blank = ' ';
	char star = '*';
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++) {
		for (b = 1; b <= N - i; b++) {
			printf("%c", blank);
		}for (j = 1; j <= 2 * i - 1; j++) {
			printf("%c", star);
		}printf("\n");
	}printf("\n");*/
	//Q4.1000000 이하의 피보나치 수열의 짝수 들의 합을 구한다.
	
	return 0;
}