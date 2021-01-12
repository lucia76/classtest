#include <stdio.h>

int main() {

	//switch(기준값)
	//{
    //case
    //}
	//int number = 3;
	//switch (number) {//바로 3으로 점프
	//case 1: printf("1\n"); break;//break탈출
	//case 2: printf("2\n"); break;
	//case 3: printf("3\n"); break;
	//case 4: printf("4\n"); break;
	//case 5: printf("5\n"); break;
	//default: printf("숫자가 아니다\n");
	//}

	//if (number == 1)
	//	printf("1\n");
	//else if (number == 2)
	//	printf("2\n");
	//else if (number == 3)
	//	printf("3\n");
	//else {
	//	printf("숫자가 아니다");
	//}
	//세 정수 abc 가 입력 되었을 때 짝수만 출력
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a % 2 == 0) {
		printf("%d\n", a);
	}
	if (b % 2 == 0) {
		printf("%d\n", b);
	}
	if (c % 2 == 0) {
		printf("%d\n", c);
	}
	else {
		printf("짝수가 아닙니다");
	}*/
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a % 2 == 0) {
		printf("a = %d 짝수\n", a);
	}else{
		printf("a = %d 홀수\n", a);
	}if (b % 2 == 0) {
		printf("b = %d 짝수\n", b);
	}else {
		printf("b = %d 홀수\n", b);
	}if (c % 2 == 0) {
		printf("c = %d 짝수\n", c);
	}else {
		printf("c = %d 홀수\n", c);
	}*/
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if ((a > b) && (b > c) || (c > b) && (b > a)) {
		printf("%d", b);
	}
	else if ((b > a) && (a > c) || (c > a) && (a > b)) {
		printf("%d", a);
	}else if ((a > c) && (c > b) || (b > c) && (c > a)) {
		printf("%d", c);
	}
	else {
		printf("각각 다른 수를 입력하시오");
	}*/
	//오름차순으로 출력
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && b > c) {
		printf("%d %d %d", c, b, a);
	}
	else if (a > c && c > b) {
		printf("%d %d %d", b, c, a);
	}
	else if (b > a && a > c) {
		printf("%d %d %d", c, a, b);
	}
	else if (b > c && c > a) {
		printf("%d %d %d", a, c, b);
	}
	else if (c > a && a > b) {
		printf("%d %d %d", b, a, c);
	}
	else if (c > b && b > a) {
		printf("%d %d %d", a, b, c);
	}
	else {
		printf("각각 다른 수를 입력하시오");
	}*/
	//점수를 입력받아 출력
	//int score = 0;
	//printf("점수를 입력해주세요(0~100) : ");
	//scanf_s("%d", &score);

	//if (score >= 90 && score <= 100) {
	//	printf("A");
	//}
	//else if (score >= 70) {
	//	printf("B");
	//}
	//else if (score >= 40) {
	//	printf("C");
	//}
	//else {
	//	printf("D");
	//}


//int score = 0;
//printf("점수를 입력해주세요(0~100) : ");
//scanf_s("%d", &score);
//
//switch (score / 10) {
//case 10: {
//	if (score > 100) {
//		printf("잘못하셨습니다");
//		break;
//	}
//}
//case 9: printf("A\n"); break;
//case 8:
//case 7: printf("B\n"); break;
//case 6:
//case 5:
//case 4: printf("C\n"); break;
//case 3:
//case 2:
//case 1:
//case 0: printf("D\n"); break;
//default: printf("알수 없음\n"); break;
//}
//정수 월이 입력될 때 계절을 출력하세요
//int month = 0;
//printf("계절을 알고싶은 월을 입력해주세요: ");
//scanf_s("%d", &month);
//
//if (month == 1 || month == 2 || month == 12) {
//	printf("%d월은 겨울 입니다", month);
//}
//else if (month == 3 || month == 4 || month == 5) {
//	printf("%d월은 봄입니다", month);
//}
//else if (month == 6 || month == 7 || month == 8) {
//	printf("%d월은 여름입니다", month);
//}
//else if (month == 9 || month == 10 || month == 11) {
//	printf("%d월은 가을 입니다", month);
//}
//else {
//	printf("계절을 알 수 없습니다");
//}
int month = 0;
printf("계절을 알고싶은 월을 입력해주세요: ");
scanf_s("%d", &month);

switch (month) {
case 12: 
case 1:
case 2: printf("겨울입니다"); break;
case 3:
case 4:
case 5: printf("봄입니다"); break; 
case 6:
case 7:
case 8: printf("여름입니다"); break;
case 9: 
case 10:
case 11: printf("가을입니다"); break;
default: printf("알 수 없는 계절"); break;


}

return 0;
}