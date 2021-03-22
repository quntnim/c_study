#include<stdio.h>

/*
int main() {
	printf("Hello World!\n");
	printf("집주소\n");
	
	printf("내 나이 : %d\n", 17);
	printf("내 c언어 기말점수 : %d\n", 101);
	printf("대구소프트웨어\n마이스터고등학교\n");
	return 0;
}
*/

/*
int	main() {
	int n1 = 1;//n1 상자에 1 넣기
	int n2 = 2;//n2 상자에 2 넣기
	int n3 = 3;//n3 상자에 3 넣기
	printf("n1=%d n2=%d n3=%d\n", n1, n2, n3);

	printf("n1=%d n2=%d n3=%d\n", n1+1, n2+1, n3+1);
	printf("n1=%d n2=%d n3=%d\n", ++n1, ++n2, ++n3);
	return 0;
}
*/

int main() {
	int n1 = 1;
	printf("n1=%d\n", n1); //출력
	printf("n1=%d\n", n1++); //출력 후 +1
	printf("n1=%d\n", n1); //출력
	n1++; //+1
	printf("n1=%d\n", n1); //출력
	++n1; //+1
	printf("n1=%d\n", n1); //출력
	printf("n1=%d\n", ++n1); //+1 후 출력

	return 0;
}
