# include <stdio.h>
//��ó���� 
//Standard Input Output �����
int main()
{
	//1)����
	// ���� -100 0 23323
	//�ڷ���
	short s = 12000008; //2 byte 4gb
	int i = 10000000000; //4 byte 8gb
	long l= 10000000000; //long�� �� 4byte??? 16gb 
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(l));
	return 0;//���α׷� ������ ���������� ����Ǿ����ϴ�
}
//int�� ����ϴ� ���� return ���� 0�̶�?
//����
//����
//���ǹ�
//�þ�Դ� c���