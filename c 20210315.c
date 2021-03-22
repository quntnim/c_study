#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
int main()
{
	int n1 , n2;

	printf("1번 숫자 입력 : ");
	scanf("%d", &n1);
	printf("2번 숫자 입력 : ");
	scanf("%d", &n2);

	int ans = n1 & n2;

	printf("%d\n", ans);
	return 0;
}
*/

/*
int main()
{
	int n1, n2;

	printf("1번 숫자 입력 : ");
	scanf("%d", &n1);
	printf("2번 숫자 입력 : ");
	scanf("%d", &n2);

	int ans = n1 | n2;

	printf("%d\n", ans);
	return 0;
}
*/

/*
int main()
{
	int n1, n2;

	printf("1번 숫자 입력 : ");
	scanf("%d", &n1);
	printf("2번 숫자 입력 : ");
	scanf("%d", &n2);

	int ans = n1 ^ n2;
	
	printf("%d\n", ans);
	return 0;
}
*/

/*
int main()
{
	int n = 2;
	printf("%d\n", n);
	printf("%d\n", n<<1);
	printf("%d\n", n<<2);
	printf("%d\n", n>>1);

	return 0;
}
*/

/*
int main()
{
	int a;
	printf("문제 번호 입력 : ");
	scanf("%d", &a);

	if (a == 1)
	{
		int n1;
		scanf("%d", &n1);
		printf("%d\n", ~n1 + 1);

		return 0;
	}
	else if (a == 2)
	{
		int n1 = 3;
		n1 << 3;
		n1 >> 2;
		printf("%d\n", n1);

		return 0;
	}
}
*/

int main()
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("	   ch의 크기 : %d\n", sizeof(ch));
	printf("	 inum의 크기 : %d\n", sizeof(inum));
	printf("	 dnum의 크기 : %d\n", sizeof(dnum));

	printf("	 char의 크기 : %d\n", sizeof(char));
	printf("	  int의 크기 : %d\n", sizeof(int));
	printf("	 long의 크기 : %d\n", sizeof(long));
	printf("    long long의 크기 : %d\n", sizeof(long long));
	printf("	float의 크기 : %d\n", sizeof(float));
	printf("       double의 크기 : %d\n", sizeof(double));

	return 0;
}
