#include <stdio.h>

int main() {

	//if
	//참
	//true
	//false
	//같다 크거나 같다
	//x<=y
	//x>=y
	//x==y(x는 y와 같다)
	//x!=y
	//||
	//&&
	//x===y ???
	//참 or true 1
	//거짓 or false 0
	//!= 같지 않다
	//둘다 자료형 타입은 다르지만 값이 같아서 1
	//=== 값과 타입이 같으냐
	int number1 = 1;
	short number2 = 1;
	printf("%d", 1 != 2);
	if (number1 != number2) 
	{
		printf("같다");
	}
	else {
		printf("다르다");
	}
	//or 또는
	//and 그리고
	printf("%d\n", 1 == 1 || 1 == 1);//t||t t
	printf("%d\n", 1 == 1 || 1 == 2);//t||f t
	printf("%d\n", 1 == 2 || 1 == 2);//f||f f 하나만 참이어도 참

	printf("%d\n", 1 == 1 && 1 == 1);//둘다 참이어야지만 참
	printf("%d\n", 1 == 1 && 1 == 2);
	printf("%d\n", 1 == 2 && 1 == 2);
	

	//두정수 (a, b)를 입력받아
	//a가 b보다 크면 1을 작거나 같으면 0을 출력
	int a = 0;
	int b = 0;
	printf("두 정수를 입력받으세요 : ");
	scanf_s("%d %d", &a, &b);

	if (b >= a) {
		printf("1");
	}
	else {
		printf("0");
	}

	int num1 = 0;
	int num2 = 0;
	scanf_s("%d %d", &num1, &num2);

	if (num1 != num2) {
		printf("1");
	}
	else {
		printf("0");
	}

	//switch
	//삼항연산자
	int num1 = 0;
	int num2 = 0;
	int num3 = num1 == num2 ? 1 : 0;

	printf("%d\n", num1 == num2 ? 10 : -10);
	printf("%d\n", num3);
	//(조건)  ? (2) true (3) false;
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d %d", &num1, & num2);
	if (num1 > num2) {
		printf("%d\n", num1); //if는 단독적으로 사용가능 
	}else if (num1 == num2) {
		printf("같은수는 비교 x");
	}
	else {
		printf("%d\n", num2);
	}

	int num3 = 0;
	int num4 = 0;
	scanf_s("%d %d", &num3, &num4);
	printf("%d\n", num3 > num4 ? num3 : num4);
	int num = 0;
	scanf_s("%d", &num);

	if (num < 10) {
		printf("small");
	}

	int num1 = 0;
	scanf_s("%d", &num1);

	if (num1 < 10) {
		printf("small");
	}
	else {
		printf("BIG");
	}

	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("%d - %d", a, b);
	}
	else {
		printf("%d - %d", b, a);
	}



return 0;
}