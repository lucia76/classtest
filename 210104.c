#include <stdio.h>

int main() {
	int i;//1
	printf("�Է��ϰ� ���� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &i);

	if (i == 7) {
		printf("����� ����� ���� 7�� �Է��߽��ϴ�");
	}
	else {
		printf("����� %d�� �����ϴ� ����!", i);// ���� ������
	}
	double i, j;//2
	printf("�������� �� ���� �Է����ּ��� :");
	scanf_s("%lf %lf", &i, &j);
	if (j == 0) {
		printf("0���δ� ���� �� �����ϴ�");
		return 0;

	}
	printf("%f�� %f�� ���� ��� ���� %.2f \n", i, j, i / j);
	
	int score;//3

	printf("����� ���������� �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("����� �հ��Դϴ�!\n");
	}
	else {
		printf("����� ���հ��Դϴ�\n");
	}
	
	int num1, num2;//4

	printf("���� �� ���� �Է����ּ��� : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		printf("%d�� %d���� Ů���ϴ�", num1, num2);
	}if (num1 < num2) {
		printf("%d�� %d���� �۽��ϴ�", num1, num2);
	}if (num1 >= num2) {
		printf("%d�� %d���� ũ�ų� �����ϴ�", num1, num2);
	}if (num1 <= num2) {
		printf("%d�� %d���� �۰ų� �����ϴ�", num1, num2);
	}if (num1 == num2) {
		printf("%d�� %d�� �����ϴ�", num1, num2);
	}if (num1 != num2) {
		printf("%d�� %d�� �ٸ��ϴ�", num1, num2);
	}
	int num;//5
	printf("�ƹ����ڳ� �Է��غ����� : ");
	scanf_s("%d", &num);

	if (num == 7) {
		printf("7�� ����� ���ڿ���!!");//if 
	}else if (num == 13) {
		printf("13�� ���� �����ϴ� ���ڿ���");
	}
	else if (num == 4) {
			printf("4�� ������ ���� ����");
		}
	else {
			printf("����� ���� %d ����", num);
		}
	float ave_score;//6
	float math, english, science, programming;

	printf("�� ������ ���������� �˷��ּ��� : ");
	scanf_s("%f %f %f %f", &math, &english, &science, &programming);

	ave_score = (math + english + science + programming) / 4;

	if (ave_score >= 90) {
		printf("��� %.1f!! ����� �����Դϴ�", ave_score);
	}
	else if (ave_score >= 60) {
		printf("��� %.1f!! �� �� ����ϼ���", ave_score);
	} 
	else {
		printf("��� %.1f!! ���θ� �߷� �� �� ����", ave_score);
	}
	
	int height, weight;//7
	printf("����� Ű�� �����Ը� �˷��ּ��� : ");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("����� �ű� �Դϴ� \n");
	}if (!(height >= 190 || weight >= 100)) {
		printf("����� �ű��� �ƴմϴ� \n");
	}


	return 0;
}