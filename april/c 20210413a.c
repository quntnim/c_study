#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int n; //전역변수 기본적으로 0
int f(int n)
{
	if (n < 0)
		return 0;
	printf("함수안에 함수 호출 : %d\n", n);
	f(n - 1);
}
int main()
{
	f(3);
	return 0;
}
*/

int n;
int facto(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * facto(n - 1);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	facto(a);
	printf("결과 = %d\n", facto(a));
}
