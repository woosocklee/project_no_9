#include <stdio.h>

/*
Q1.	int �� num1, num2�� ����� ���ÿ�
	10�� 20 ���� �ʱ�ȭ ���ְ�,
	int �� ������ ptr1, ptr2�� ����,
	�� num1�� num2�� ����Ű�� �Ѵ�.
	ptr1�� ptr2�� �̿��ؼ� num1�� 10 ����, num2�� 10 �����ϰ� �Ѵ�.
	���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ۴�.
	���������� ptr1�� ptr2�� ����Ű�� ������ ������ ����Ѵ�.
	�׸��� .. �� ������ ����� ���� ����ؼ� Ȯ���Ѵ�.*/


int main_9_6()
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, *ptr2 = &num2;
	printf("���� num1: %d, ���� num2: %d\n", num1, num2);
	
	*ptr1 += 10;
	*ptr2 -= 10;
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1�� ����Ű�� ������ ����: %d, ptr2�� ����Ű�� ������ ����: %d\n", *ptr1, *ptr2);
	printf("���� num1�� ��: %d, ���� num2�� ��: %d", num1, num2);

}