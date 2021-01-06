#include <stdio.h>

int main() {
	float f = 1.2;
	double d = 2.222;
	printf("%f\n", f);//\n계행
	printf("%f\n", d);
	//문자 a b c 가 나 다
	char c = 'a';
	printf("%c", c);
	


	//hello world
	printf("hello world");
	
	//문자열
	//"abc"
	//문자
	//'a'
	printf("Hello\n");
	printf("World\n");
	printf("Hello\nWorld");
	//변수 선언
	//정수를 저장하는 자료형 타입(1)
	//변수 이름 (2)
	//(1)int (2)number;
	int number1 = 0;
	printf("%d\n", number1);
	//선언과 동시에 초기화
	//%d 십진수 형태
	//%c 문자 형태로
	//%f 실수의 형태로 0.01
	//\n개행
	int number2 = 10;
	printf("%d\n", number2);
	
	//& 엔퍼센트 -> 주소
	float number = 0;
	//scanf_s (1), (2)
	//(1) 어떠한 형태로 받겠다
	//(2) &변수명
	scanf_s("%f", &number);
	printf("%f", number);
	// + - * /
	int num1 = 1;
	int num2 = 2;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	
	//입력받아 
	//정수 두개
	//사칙연산 결과
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	//scanf_s("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	
	//문자를 입력받아서 출력
	char c = ' '; 
	//
	scanf_s("%c", &c);
	printf("%c", c);
	float f = 0.0;//0.
	scanf_s("%f", &f);
	printf("%f", f);
	char c = 'A';
	printf("%d", c);
	
	//문자  2개를 입력 받아서 출력 반대로
	char char1 = ' ';
	char char2 = ' ';

	scanf_s("%c", &char1);
	getchar();
	scanf_s("%c", &char2);

	printf("%c , %c", char2, char1);

	//조건문
	//반복문
	//배열
	//포인터

	// C R U D
	//CREATE
	//READ
	//UPDATE
	//DELETE

	//구조체






	return 0;
}