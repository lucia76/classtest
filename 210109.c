#include <stdio.h>

int main() {

	//if
	//��
	//true
	//false
	//���� ũ�ų� ����
	//x<=y
	//x>=y
	//x==y(x�� y�� ����)
	//x!=y
	//||
	//&&
	//x===y ???
	//�� or true 1
	//���� or false 0
	//!= ���� �ʴ�
	//�Ѵ� �ڷ��� Ÿ���� �ٸ����� ���� ���Ƽ� 1
	//=== ���� Ÿ���� ������
	int number1 = 1;
	short number2 = 1;
	printf("%d", 1 != 2);
	if (number1 != number2) 
	{
		printf("����");
	}
	else {
		printf("�ٸ���");
	}
	//or �Ǵ�
	//and �׸���
	printf("%d\n", 1 == 1 || 1 == 1);//t||t t
	printf("%d\n", 1 == 1 || 1 == 2);//t||f t
	printf("%d\n", 1 == 2 || 1 == 2);//f||f f �ϳ��� ���̾ ��

	printf("%d\n", 1 == 1 && 1 == 1);//�Ѵ� ���̾������ ��
	printf("%d\n", 1 == 1 && 1 == 2);
	printf("%d\n", 1 == 2 && 1 == 2);
	

	//������ (a, b)�� �Է¹޾�
	//a�� b���� ũ�� 1�� �۰ų� ������ 0�� ���
	int a = 0;
	int b = 0;
	printf("�� ������ �Է¹������� : ");
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
	//���׿�����
	int num1 = 0;
	int num2 = 0;
	int num3 = num1 == num2 ? 1 : 0;

	printf("%d\n", num1 == num2 ? 10 : -10);
	printf("%d\n", num3);
	//(����)  ? (2) true (3) false;
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d %d", &num1, & num2);
	if (num1 > num2) {
		printf("%d\n", num1); //if�� �ܵ������� ��밡�� 
	}else if (num1 == num2) {
		printf("�������� �� x");
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