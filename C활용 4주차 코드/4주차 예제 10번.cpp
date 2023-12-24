/*10. 다음의 조건에 따라 사용자정의함수를 정의하여 코드를 완성하고, 결과를 실행시켜보세요.

main에서 입력받은 n 에대하여 ,1~n까지의 팩토리얼을 출력 하는 int 타입의 함수
함수명  fac(int n)
재귀함수 이용*/
#include <stdio.h>

int fac(int n);
int main(){
	int n;
	printf("N:");
	scanf("%d",&n);
	printf("%d\n",fac(n));
	return 0;
}

int fac(int a){
	if( a<=1)
	return 1;
	else
	return fac(a-1)*a;
}
