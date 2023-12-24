/*2. 정수형 변수 num의 입력값에 대하여 num의 일의자리수 출력
단 100보다 큰경우 error입니다.*/
#include <stdio.h>

int main()
{
	int num;
	printf("숫자를 입력하세요(100이하):");
	scanf("%d",&num);
	if(num<=100){
		num=num%10;
		printf("%d", num);
	
	} 
	else if(num>100){
		printf("에러입니다");
	}
	
	return 0;
 } 
