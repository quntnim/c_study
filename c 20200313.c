#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int po = 0;

	printf("0 = 점수 계산\n1 = 나누기\n2 = 직사각형\n3 = 전치/후치 연산자\n4 = 몸무게\n\n숫자 입력 : ");
	scanf("%d", &po);
	if (po == 0)
	{
		printf("\n숫자 4개 입력 : ");
		int a = 0, b = 0, c = 0, d = 0, sum = 0, avg = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		sum = a + b + c + d;
		avg = (a + b + c + d) / 4;
		printf("sum %d\n", sum);
		printf("sum %d", avg);

		return 0;
	}
	else if (po == 1)
	{
		printf("\na 나누기 b :");
		int a = 0, b = 0, end = 0, n = 0;
		scanf("%d %d", &a, &b);

		end = a / b;
		n = a % b;
		printf("%d / %d = %d...%d", a, b, end, n);

		return 0;
	}
	else if (po == 2)
	{
		printf("\n숫자 2개 입력 : ");
		int a = 0, b = 0, width = 0, length = 0, area = 0;
		scanf("%d %d", &a, &b);

		width = a + 5;
		length = b * 2;
		area = width * length;
		printf("width = %d\n", width);
		printf("length = %d\n", length);
		printf("area = %d", area);

		return 0;
	}
	else if (po == 3)
	{
		printf("\n숫자 2개 입력 : ");
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);


		printf("%d %d\n", ++a, b--);
		printf("%d %d\n", a, b);

		return 0;
	}
	else if (po == 4)
	{
		printf("\n숫자 4개 입력 : ");
		int a = 0, b = 0, c = 0, d = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		printf("%d", (a > c) && (b > d));
		/*
		if (a > c, b > d)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		*/
		return 0;
	}
	else
	{
		printf("잘못된 숫자");

		return 0;
	}
}
