#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxnum(int a, int b, int c) // 인자
{
	if (a > b && a > c) return a;
	else if (b > a && b > c) return b;
	else return c;
}

int minnum(int a, int b, int c) // 인자
{
	if (a < b && a < c) return a;
	else if (b < a && b < c) return b;
	else return c;
}

int main()
{
	int xo = 0;
	printf("문제 번호 입력 : ");
	scanf_s("%d", &xo);
	printf("\n\n\n\n\n");
	if (xo == 1)
	{
		double a=0;
		printf("제곱근 출력\n\n숫자 입력 : ");
		scanf_s("%lf",&a);
		printf("%lf", sqrt(a));
	}
	else if (xo == 2)
	{
		double a = 0, b = 0;
		printf("지수 함수 출력\n\n곱할 수 입력 : ");
		scanf_s("%lf", &a);
		printf("지수 입력 : ");
		scanf_s("%lf", &b);
		printf("%.0lf의 %.0lf제곱은 %.3lf이다", a, b, pow(a, b));
	}
	else if (xo == 3)
	{
		int a, b, c, max, min;
		printf("최댓값 최솟값 출력\n\n수 3개 입력 : ");
		scanf_s("%d %d %d", &a, &b, &c);
		max = maxnum(a, b, c);
		min = minnum(a, b, c);
		printf("max = %d, min = %d", max, min);
	}
}
