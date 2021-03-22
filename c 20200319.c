#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	printf("문제 번호 입력 : ");
	scanf_s("%d", &num);
	if (num == 1)
	{
		printf("\n(1)\n5개의 정수를 입력 받아 각각의 수에 +3, -3, x3, /3, %3의 연상을 실행하여 그 값을 저장한 후 차례대로 출력하는 프로그램을 작성하시오.\n\n");

		int a = 0, b = 0, c = 0, d = 0, e = 0;
		printf("5개의 수를 입력하시오. ");
		scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
		a += 3, b -= 3, c *= 3, d /= 3, e %= 3;
		printf("%d %d %d %d %d", a, b, c, d, e);
		return 0;
	}
	else if (num == 2)
	{
		printf("\n(2)\n정수 변수 a와 b를 만들고 각각 10으로 초기화한 후 다음과 같이 출력하는 프로그램을 작성하시오.\n\n");
		printf("---------------------\n");

		int a = 10, b = 10;
		printf("최초값 a = %d, b = %d\n\n", a, b);
		printf("a++ = %d, ++b = %d\n", a++, ++b);
		printf("실행후 a = %d, b = %d\n\n", a, b);
		printf("a-- = %d, --b = %d\n", a--, --b);
		printf("실행후 a = %d, b = %d\n", a, b);
		printf("---------------------\n");
		return 0;
	}
	else if (num == 3)
	{
		printf("\n(3)\n정수 2개를 입력받아서 첫 번째 수는 100을 증가시켜 저장하고, 두 번째 수는 10으로 나눈 나머지를 저장한 후, 두 수를 차례로 출력하는 프로그램을 작성하시오.\n\n");

		int a = 0, b = 0;
		scanf_s("%d %d", &a, &b);
		a += 100, b %= 10;
		printf("%d %d", a, b);
		return 0;
	}
	else if (num == 4)
	{
		printf("\n(4)\n화면에 다음과 같이 출력하는 프로그램을 작성하시오.(조건1: 첫문장은 %%s 활용, 조건2: 모두 \"printf\" 함수만 활용)\n\n");
		printf("-------------------------------------\n");

		printf("%s", "수를 출력할 때는 따옴표를 생략합니다.\n");
		printf("%d\n", 123);
		printf("%lf\n", 6.500000);
		printf("%lf\n", 68.600000);
		printf("%d + %d = %d\n", 10, 5, 15);
		printf("내 생일은 %d년 %d월 %d일입니다.\n", 2005, 04, 24);
		printf("-------------------------------------\n");
		return 0;
	}
	else if (num == 5)
	{
		printf("\n(5)\n초를 입력받아 초와 분으로 출력하는 프로그램을 작성하시오.\n\n");

		int sec = 0;
		scanf_s("%d", &sec);
		printf("%d초는 %d분 %d초입니다.", sec, sec / 60, sec % 60);
		return 0;
	}
	else
	{
		printf("잘못된 숫자!");
		return 0;
	}
}
