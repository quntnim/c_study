#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"cful.h"

int main()
{
	int xd;

	printf("문제 번호 입력 : ");
	scanf("%d", &xd);
	if (xd == 1)
	{
		long double area, r;

		printf("반지름 입력 : ");
		scanf("%lf", &r);

		area = r * r * 3.141592;
		printf("%.2lf\n", area);

		return 0;
	}
	else if (xd == 2)
	{
		int a;
		printf("숫자 입력 : ");
		scanf("%d", &a);
		printf("%c\n", a);
		getchar();
		return 0;
	}
	else if (xd == 3)
	{
		char a;
		printf("문자 입력 : ");
		scanf("%c", &a);
		scanf("\n");
		printf("%d", a);
		return 0;
	}
	else if (xd == 4)
	{
		int x1, x2, y1, y2;
		printf("1번째 점 (왼쪽 위) : ");
		scanf("%d %d", &x1, &y1);
		printf("2번째 점 (오른쪽 아래) : ");
		scanf("%d %d", &x2, &y2);

		printf("%lf\n", (double)(x2 - x1) * (y2 - y1));
	}
	else
	{
		printf("잘못된 숫자");
		return 0;
	}
}
