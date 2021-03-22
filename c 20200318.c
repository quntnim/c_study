#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int xo;
	printf("문제 번호 입력 : ");
	scanf_s("%d", &xo);
	printf("\n");
	if (xo == 1)
	{
		int a = 0, b = 0, c = 0;
		scanf_s("%d %d", &a, &b);
		++a;
		c = a + b;
		b--;
		printf("a = %d, b = %d, c = %d", a, b, c);
		return 0;
	}
	else if (xo == 2)
	{
		int a = 0, b = 0, c = 0;
		double avg;
		scanf_s("%d %d %d", &a, &b, &c);
		avg = (a + b + c) / 3.0;
		printf("avg = %.1lf", avg);
		return 0;
	}
	else if (xo == 3)
	{
		double a, b, c, sum, avg;
		scanf_s("%lf %lf %lf", &a, &b, &c);
		sum = (int)a + (int)b + (int)c;
		avg = sum / 3.0;
		printf("sum = %.0lf avg = %.0lf", sum, avg);
		return 0;
	}
	else if (xo == 4)
	{
		int a = 0, b = 0, c = 0;
		scanf_s("%d %d %d", &a, &b, &c);
		printf("%d %d %d %d", (a > b), (b >= c), (a <= b), (b < c));
		return 0;
	}
	else if (xo == 5)
	{
		double a = 0, cm = 0;
		printf("yard? ");
		scanf_s("%lf", &a);
		cm = a * 91.44;
		printf("%.1lfyard = %.1lfcm", a, cm);
		return 0;
	}
	else if (xo == 10)
	{
		printf("히히\n");
		return 100200300400;
	}
	else
	{
		printf("잘못된 숫자");
		return 0;
	}
}
