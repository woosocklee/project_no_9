#include <stdio.h>

int main_9_3()
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
	pa = &b; // const pointer�� ����Ű�� �ּҸ� �ٲ� �� ����.
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	a = 20; // *pa = 20 const pointer�� ����Ű�� �ּ��� ���� ������ �� ����.
	printf("���� a �� : %d\n", *pa);
	
	return 0;

}