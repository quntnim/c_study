#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
void fibo(int n)
{
	int f1 = 0, f2 = 1, f3;
	if (n == 1)
		printf("%d", f1);
	else
		printf("%d\n%d\n", f1, f2);
	for (int i = 0; i < n - 2; i++) {
		f3 = f1 + f2;
		printf("%d\n", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	fibo(a);
	return 0;
}
*/

int num = 3;
void func() {
	num++;
}
int main()
{
	if (num == 1)
	{
		int num = 7;
		num += 10;
		printf("%d\n", num);
	}
	func();
	printf("%d", num);
	return 0;
}
