/*6.  다음의 조건에 따라 사용자정의함수를 정의하여 코드를 완성하고, 결과를 실행시켜보세요.

사용자 정의 함수에서 입력받은 n 에대하여 ,1~n까지의 합을 구하여 출력 하는 void 타입의 함수
함수명: sumN(int n)*/

#include <stdio.h>

void sumN();

int main(){

	sumN();
	return 0;

}


void sumN(){
	int n,  i, sum=0;
	printf("N:");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("1~%d까지의 합: %d\n",n,sum);
}

