#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fibo(int n)
{
	int f1 = 1, f2 = 1, f3;
	if (n == 1)
		printf("%d ", f1);
	else
	{
		printf("%d %d ", f1, f2);
		for (int i = 0; i < n - 2; i++)
		{
			f3 = f1 + f2;
			printf("%d ", f3);
			f1 = f2;
			f2 = f3;
		}
	}
}

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	fibo(a);
	return 0;
}

