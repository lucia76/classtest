# include <stdio.h>
//전처리기 
//Standard Input Output 입출력
int main()
{
	//1)변수
	// 정수 -100 0 23323
	//자료형
	short s = 12000008; //2 byte 4gb
	int i = 10000000000; //4 byte 8gb
	long l= 10000000000; //long이 왜 4byte??? 16gb 
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(l));
	return 0;//프로그램 실행이 정상적으로 종료되었습니다
}
//int를 사용하는 이유 return 값이 0이라서?
//내일
//변수
//조건문
//씹어먹는 c언어