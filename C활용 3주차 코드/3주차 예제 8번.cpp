/*11. for문을 이용한 구구단(2~5) 출력 프로그램
n단은 제외*/
#include <stdio.h>

int main()
{	int n;
	int i,j;
	
	 printf("2-5단까지 출력합니다.\n2-5단 중 제외할 단을 입력하세요\ndan:");
	 scanf("%d",&n);
	 for(i=2;i<=5;i++){
	 	printf("\n");
	 	if(i==n)
	 	continue;
	 	printf("<<%d단>>\n",i);
	 	for(j=1;j<=9;j++)
	 	printf("%d*%d=%d \n", i,j,i*j );//for, if다음괄호없으면 다음문장만// 
	 }
	
	return 0;
}
