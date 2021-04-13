#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int xo = 0;
	printf("문제 번호 입력 : ");
	scanf_s("%d", &xo);
	printf("\n");
	if (xo == 0)
	{
		double d1 = 1.23e-3; //0.00123
		printf("%f\n", d1); //0.001230
		printf("%e\n", d1); // 1.230000e-03
		printf("%E\n", d1); // 1.230000E-03
		printf("%g\n", d1); // 0.00123
		double d2 = 1.23456578e-3;
		printf("%f\n", d2);
		printf("%e\n", d2);
		printf("%E\n", d2);
		printf("%g\n", d2);
		return 0;
	}
	else if (xo == 1)
	{
		int n10 = 0, n8 = 0, n16 = 0;
		scanf_s("%d %o %x", &n10, &n8, &n16);
		printf("======10진수로 변환======\n");
		printf("%d %d(8) %d(16)", n10, n8, n16);
		return 0;
	}
	else if (xo == 2)
	{
		int n10 = 0, n8 = 0, n16 = 0;
		scanf_s("%d %o %x", &n10, &n8, &n16);
		printf("======16진수로 변환======\n");
		printf("%x %x %x", n10, n8, n16);
		return 0;
	}
	else if (xo == 3)
	{
		int i = 1;
		while (i < 10)
		{
			printf("2 x %d = %d\n", i, 2 * i);
			i++;
		}
		return 0;
	}
	else if (xo == 4)
	{
		int i = 1;
		printf("========\nwhile 문\n========\n");
		while (i <= 10)
			printf("%d\n", i++);
		i = 1;
		printf("===========\ndo while 문\n===========\n");
		do {
			printf("%d\n", i++);
		} while (i <= 10);
		return 0;
	}
	else if (xo == 5)
	{
		printf("0을 입력받을때까지 더함\n\n");
		int a = 0, sum = 0;
		do
		{
			scanf_s("%d", &a);
			sum += a;
		} while (a);
		printf("%d\n", sum);
		return 0;
	}
	else if (xo == 6)
	{
		printf("단 입력 : ");
		int n = 0, dan = 0;
		scanf_s("%d", &dan);
		while (n++ < 9)
			printf("%d x %d = %d\n", dan, n, n * dan);
		return 0;
	}
	else if (xo == 7)
	{
		int n = 0, dan = 1;
		while (dan < 10)
		{
			n = 0;
			printf("==========\n%d단\n==========\n", dan);
			while (n++ < 9)
				printf("%d x %d = %d\n", dan, n, n * dan);
			dan++;
		}
		return 0;
	}
	else
		printf("잘못된 숫자 !\n");
}
