/*지역변수 n에 대하여 재귀함수를 이용하여 n의 팩토리얼과 피보나치 값을 구해보세요*/

#include <stdio.h>
#include <time.h>

int fac(int);
int fibo(int);

int main(void){
	int n=5, i;
	time_t start, end;
	start=clock();
	for(i=1;i<=n;i++){
		printf("%d!=%d\n",i, fac(i));
	}
	
	for(i=1;i<=n;i++){
		printf("%d의 피보나치 값은%d\n",i, fibo(i));
	}
	end=clock();
	printf("time=%lf초\n", (double)(end-start)/1000);//clock은 단위가  ms여서 1000을 나눠야 초단위 
	return 0;
}


int fac(int n){
	if(n<=1)
	return 1;
	else 
	return n*fac(n-1);
	}
	

int fibo(int n){
	if(n==1 || n==2)
	return 1;
	else if(n==0)
	return 0;
	else
	return fibo(n-1)+fibo(n-2);

}


