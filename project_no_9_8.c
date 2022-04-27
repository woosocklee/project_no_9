#include <stdio.h>

void Output1(int* pa)
{
	*pa = 30;
	printf("%d\n", *pa);
}
void Output2(int pa)
{
	pa = 20;
	printf("%d\n", pa);
}
int main_9_8()
{
	int a1 = 10;
	Output1(&a1);

	printf("a1 = %d \n", a1);

	Output2(a1);

	printf("a1 = %d \n", a1);

	return 0;
}