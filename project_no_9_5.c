#include <stdio.h>

int main_9_5()
{
	int a = 10;
	int* pa = &a;
	double* pd;

	pd = pa;
	printf("a : %d, *pa : %d, *pd : %lf\n",a , *pa, *pd);
	printf("&a : %p, pa : %p, pd : %p \n",&a , pa, pd);
	
	return 0;
}