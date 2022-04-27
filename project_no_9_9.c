#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main_9_9(void)
{
	double max, mid, min;
	printf("�Ǽ��� 3�� �Է�");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ���: %.1lf, %.1lf, %.1lf \n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp)
	{
		swap(maxp, midp);
	}
	if (*maxp < *minp)
	{
		swap(maxp, minp);
	}
	if (*midp < *minp)
	{
		swap(midp, minp);
	}
}