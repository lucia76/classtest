#include <stdio.h>

int main() {

	//switch(���ذ�)
	//{
    //case
    //}
	//int number = 3;
	//switch (number) {//�ٷ� 3���� ����
	//case 1: printf("1\n"); break;//breakŻ��
	//case 2: printf("2\n"); break;
	//case 3: printf("3\n"); break;
	//case 4: printf("4\n"); break;
	//case 5: printf("5\n"); break;
	//default: printf("���ڰ� �ƴϴ�\n");
	//}

	//if (number == 1)
	//	printf("1\n");
	//else if (number == 2)
	//	printf("2\n");
	//else if (number == 3)
	//	printf("3\n");
	//else {
	//	printf("���ڰ� �ƴϴ�");
	//}
	//�� ���� abc �� �Է� �Ǿ��� �� ¦���� ���
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
		printf("¦���� �ƴմϴ�");
	}*/
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a % 2 == 0) {
		printf("a = %d ¦��\n", a);
	}else{
		printf("a = %d Ȧ��\n", a);
	}if (b % 2 == 0) {
		printf("b = %d ¦��\n", b);
	}else {
		printf("b = %d Ȧ��\n", b);
	}if (c % 2 == 0) {
		printf("c = %d ¦��\n", c);
	}else {
		printf("c = %d Ȧ��\n", c);
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
		printf("���� �ٸ� ���� �Է��Ͻÿ�");
	}*/
	//������������ ���
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
		printf("���� �ٸ� ���� �Է��Ͻÿ�");
	}*/
	//������ �Է¹޾� ���
	//int score = 0;
	//printf("������ �Է����ּ���(0~100) : ");
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
//printf("������ �Է����ּ���(0~100) : ");
//scanf_s("%d", &score);
//
//switch (score / 10) {
//case 10: {
//	if (score > 100) {
//		printf("�߸��ϼ̽��ϴ�");
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
//default: printf("�˼� ����\n"); break;
//}
//���� ���� �Էµ� �� ������ ����ϼ���
//int month = 0;
//printf("������ �˰���� ���� �Է����ּ���: ");
//scanf_s("%d", &month);
//
//if (month == 1 || month == 2 || month == 12) {
//	printf("%d���� �ܿ� �Դϴ�", month);
//}
//else if (month == 3 || month == 4 || month == 5) {
//	printf("%d���� ���Դϴ�", month);
//}
//else if (month == 6 || month == 7 || month == 8) {
//	printf("%d���� �����Դϴ�", month);
//}
//else if (month == 9 || month == 10 || month == 11) {
//	printf("%d���� ���� �Դϴ�", month);
//}
//else {
//	printf("������ �� �� �����ϴ�");
//}
int month = 0;
printf("������ �˰���� ���� �Է����ּ���: ");
scanf_s("%d", &month);

switch (month) {
case 12: 
case 1:
case 2: printf("�ܿ��Դϴ�"); break;
case 3:
case 4:
case 5: printf("���Դϴ�"); break; 
case 6:
case 7:
case 8: printf("�����Դϴ�"); break;
case 9: 
case 10:
case 11: printf("�����Դϴ�"); break;
default: printf("�� �� ���� ����"); break;


}

return 0;
}