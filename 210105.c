#include <stdio.h>

int main() {
	/*int i;//1
	for (i = 0; i < 20; i++) {
		printf("���� : %d \n", i);
	}
	int i, sum = 0;//2
	for (i = 0; i < 20; ++i) {
		sum = sum + i;
	}
	printf("1���� 19������ �� : %d", sum);
	int i, sum = 0;//3

	for (i = 0; i < 10001; ++i) {
		sum = sum + i;
	}
	printf("1���� 10000������ �� : %d \n", sum);
	//��� ������ ����� ���� ������� �Է¹ް� ���� ������ �Է��Ͽ� ����� ����
	int i;//3
	int score, subject;
	double sum_score = 0;

	printf("��� ������ �Է¹��� ���ΰ�?");
	scanf_s("%d", &subject);

	printf("\n������ ������ �Է����ּ���\n");
	for (i = 1; i <= subject; i++) {
		printf("���� %d : ", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("��ü ������ ����� : %.2f \n", sum_score / subject);
	int usranswer;//4

	printf("��ǻ�Ͱ� �����ϴ� ���ڸ� ���纸����!!\n");
	for (;;) {// (;;)�� ������ �׻� ��, ������ �߰�ȣ ���� ����
		scanf_s("%d", &usranswer);
		if (usranswer == 3) {
			printf("���߼̱���!\n");
			break;//�� ���ǽĿ� ������� ����Ǳ⸸ �ϸ� for�� Ż��
		}
		else {
			printf("Ʋ���̽��ϴ�\n");
		}
	}
	for (;;) {//5
		printf("a");
		break;
	}
	int i;
	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;//��ȣ�ȿ� ���ǽ� �н�

		printf(" %d ", i);
	}
	int i, j;//6 ������

	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {//i�� ������ �ʰ� j�� ���ư��ٰ� ������ �ٽ� ���� �ö󰡼� �����´�
			printf(" %d x %d = %d \n", i, j, i * j);
		}
	}
	int i, j;//7

	for (i = 1; i < 10; i++) {
		for (j = 1; j < i; j++) {
			printf(" %d ", j);
		}
	}
	int i = 1, sum = 0//8

	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1���� 100������ �� = %d \n", sum);
	int i = 1, sum = 0;//9

	do {
		sum += i;
		i++;
	} while (i < 1);

	printf(" sum : %d \n", sum); */
	/*�����غ��� ����*/
	//�Ƕ�ҵ� �����
	/*char star = '*';
	char blank = ' ';
	int i, j, b, line;

	printf("������ �Ƕ�̵带 ���� ���ΰ�? : ");
	scanf_s("%d", &line);

	for (i = 1; i <= line; i++) {//i�� ��
		for (b = 1; b <= line - i; b++) {//b�� ������ �ݺ��ؼ� ���� ����
			printf("%c", blank);
		}for (j = 1; j <= 2 * i - 1; j++) {//�࿡ ���� j�� ���� ����
			printf("%c", star);
		}
		printf("\n");
	}
	printf("\n");*/
    int i, j, a, line;
	char star = '*';
	char blank = ' ';

	printf("���ﰢ�� ����� �Ƕ�̵带 ���ٷ� ����ǰ���? : ");
    scanf_s("%d", &line);
	for (i = 1; i <= line; i++) {
		for (j = 1; j <= 2*i; j++) {
			printf("%c", star);
		}	for (a = 1; a <= line - i; a++) {
					printf("%c", blank);
				}
			printf("\n");
		}printf("\n");

	

	return 0;
}

