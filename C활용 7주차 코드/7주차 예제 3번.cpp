/*다음의 코드를 실행해보세요*/

#include<stdio.h>
#include<time.h>

int main(){
	time_t start, end;
	auto int i, sum1=0;
	start=clock();
	for(i=1;i<1000000;i++){
		if(i%2==0)
		sum1+=i;
	}
	end=clock();
	
	printf("sum=%d\n", sum1);
	printf("time=%5.2lfms\n", (double)(end-start));
	
	return 0;
}
