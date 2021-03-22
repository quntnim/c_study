#define _CRT_SECURE_NO_WARNINGS //#pragma warning(disable:4996)
#include<stdio.h>
/*											사칙연산
int main() {
	double n1, n2;
	double re;
	printf("1번 숫자 입력 : ");
	scanf("%lf",&n1);
	printf("2번 숫자 입력 : ");
	scanf("%lf",&n2);

	printf("덧셈 : %.2lf\n", n1 + n2);
	printf("뺄셈 : %.2lf\n", n1 - n2);
	printf("곱셈 : %.lf\n", n1 * n2); 
	printf("나눗셈 : %lf\n", n1 / n2); 
	
	return 0;
}
*/

/*											숫자 3개
int main() {
	double n1, n2, n3;

	printf("1번 숫자 입력 : ");
	scanf("%lf", &n1);
	printf("2번 숫자 입력 : ");
	scanf("%lf", &n2);
	printf("3번 숫자 입력 : ");
	scanf("%lf", &n3);

	printf("덧셈 결과 : %.2lf\n", n1 + n2 + n3);
	
	return 0;
}
*/

/*											진수변환
int main() {
	int n1;

	printf("숫자 입력 : ");
	scanf("%d", &n1);

	printf("8진수 : %o\n", n1);
	printf("16진수 : %X\n", n1);
	
	return 0;
}
*/

int main() {							//오차
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++) {
		num = num + 0.1;
	}
	printf("%f\n", num);

	return 0;
}
