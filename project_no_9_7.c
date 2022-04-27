#include <stdio.h>

void swap7(int* pa, int* pb)
{
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main_9_7()
{
	int a = 10, b = 20;
	
	printf("a: %d, b: %d\n", a, b);
	swap7(&a, &b);
	printf("a: %d, b: %d\n", a, b);

	return 0;

}