#include <stdio.h>

int main() {
	float f = 1.2;
	double d = 2.222;
	printf("%f\n", f);//\n����
	printf("%f\n", d);
	//���� a b c �� �� ��
	char c = 'a';
	printf("%c", c);
	


	//hello world
	printf("hello world");
	
	//���ڿ�
	//"abc"
	//����
	//'a'
	printf("Hello\n");
	printf("World\n");
	printf("Hello\nWorld");
	//���� ����
	//������ �����ϴ� �ڷ��� Ÿ��(1)
	//���� �̸� (2)
	//(1)int (2)number;
	int number1 = 0;
	printf("%d\n", number1);
	//����� ���ÿ� �ʱ�ȭ
	//%d ������ ����
	//%c ���� ���·�
	//%f �Ǽ��� ���·� 0.01
	//\n����
	int number2 = 10;
	printf("%d\n", number2);
	
	//& ���ۼ�Ʈ -> �ּ�
	float number = 0;
	//scanf_s (1), (2)
	//(1) ��� ���·� �ްڴ�
	//(2) &������
	scanf_s("%f", &number);
	printf("%f", number);
	// + - * /
	int num1 = 1;
	int num2 = 2;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	
	//�Է¹޾� 
	//���� �ΰ�
	//��Ģ���� ���
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	//scanf_s("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	
	//���ڸ� �Է¹޾Ƽ� ���
	char c = ' '; 
	//
	scanf_s("%c", &c);
	printf("%c", c);
	float f = 0.0;//0.
	scanf_s("%f", &f);
	printf("%f", f);
	char c = 'A';
	printf("%d", c);
	
	//����  2���� �Է� �޾Ƽ� ��� �ݴ��
	char char1 = ' ';
	char char2 = ' ';

	scanf_s("%c", &char1);
	getchar();
	scanf_s("%c", &char2);

	printf("%c , %c", char2, char1);

	//���ǹ�
	//�ݺ���
	//�迭
	//������

	// C R U D
	//CREATE
	//READ
	//UPDATE
	//DELETE

	//����ü






	return 0;
}