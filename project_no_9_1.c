#include <stdio.h>

int main_9_1()
{
	int a = 10, b;
	int* pa;

	pa = &a;

	printf("a : %d , *pa : %d\n", a, *pa);
	printf("&a : %p , pa : %p\n", &a, pa);

	pa = &b;
	*pa = 20;

	printf("b : %d , *pa = %d\n", b, *pa);
	printf("&b : %p , pa : %p\n", &b, pa);
	printf("a : %d , *pa : %d\n", a, *pa);
	printf("&a : %p , pa : %p\n", &a, pa);


	return 0;
}