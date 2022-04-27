#include <stdio.h>

int main_9_3()
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b; // const pointer는 가리키는 주소를 바꿀 수 있음.
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20; // *pa = 20 const pointer는 가리키는 주소의 값에 관여할 수 없다.
	printf("변수 a 값 : %d\n", *pa);
	
	return 0;

}