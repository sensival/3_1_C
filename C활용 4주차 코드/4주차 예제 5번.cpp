/*5.  다음의 조건에 따라 사용자정의함수를 정의하여 코드를 완성하고, 결과를 실행시켜보세요.

main에서 입력받은 n 에대하여 ,1~n까지의 합을 구하여 출력 하는 void 타입의 함수
함수면 sumN(int n)*/

#include <stdio.h>
void sumN(int n);

int main(){
	int n;
	printf("N:");
	scanf("%d",&n);
	sumN(n);
	return 0;

}


void sumN(int a){
	int i, sum=0;
	for(i=1;i<=a;i++){
		sum=sum+i;
	}
	printf("1~%d까지의 합: %d\n",a,sum);
}

