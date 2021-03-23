#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int xo = 0;
	printf("1 : 구구단 2단\n2 : 구구단\n3 : 구구단 역순\n4 : 숫자 두개 사이에 있는수 더하기\n5 : 숫자 두개 사이에 있는수 곱하기\n6 : 사각형 만들기\n7 : 계단 만들기\n8 : 계단 만들기 반대로\n\n");
	printf("문제 번호 입력 : ");
	scanf_s("%d", &xo);
	printf("\n");
	if (xo == 1)
	{
		int i = 0;
		for (i = 1; i < 10; i++)
		{
			printf("2 x %d = %d\n", i, 2 * i);
		}
		printf("\n%d", i);
		return 0;
	}
	else if (xo == 2)
	{
		int i = 0, dan = 0;
		for (dan = 1; dan < 10; dan++)
		{
			printf("==========\n%d단\n==========\n", dan);
			for (i = 1; i < 10; i++)
			{
				printf("%d x %d = %d\n", dan, i, dan * i);
			}
		}
		return 0;
	}
	else if (xo == 3)
	{
		int i = 0, dan = 0;
		for (dan = 9; dan > 0; dan--)
		{
			printf("==========\n%d단\n==========\n", dan);
			for (i = 9; i > 0; i--)
			{
				printf("%d x %d = %d\n", dan, i, dan * i);
			}
		}
		return 0;
	}
	else if (xo == 4)
	{
		int n1 = 0, n2 = 0, ent = 0;
		printf("숫자 2개 입력 : ");
		scanf_s("%d %d", &n1, &n2);
		for (; n1 <= n2; n1++)
			ent += n1;	
		printf("%d", ent);
	}
	else if (xo == 5)
	{
		int n1 = 1, n2 = 0, ent = 1;
		printf("숫자 2개 입력 : ");
		scanf_s("%d %d", &n1, &n2);
		for (; n1 <= n2; n1++)
			ent *= n1;
		printf("%d", ent);
	}
	else if (xo == 6)
	{
		int i1, o1;
		printf("가로 입력 : ");
		scanf_s("%d", &o1);
		printf("세로 입력 : ");
		scanf_s("%d", &i1);
		for (int i=0; i < i1; i++)
		{
			for (int o = 0; o < o1; o++)
			{
				printf("¤");
			}
			printf("\n");
		}
	}
	else if (xo == 7)
	{
		int i;
		printf("층 입력 : ");
		scanf_s("%d", &i);
		for (; i <= i; i++)
		{
			for (int o = 0; o < i; o++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (xo == 8)
	{
		int i;
		printf("층 입력 : ");
		scanf_s("%d", &i);
		for (; i >= 0; i--)
		{
			for (int o = 0; o < i; o++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (xo == 9)
	{
		int i;
		printf("층 입력 : ");
		scanf_s("%d", &i);
		for (; i >= 0; i--)
		{
			for (int p = 0; p >= i-1; p++)
			{
				printf("x");
			}
			for (int o = 0; o < i; o++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
