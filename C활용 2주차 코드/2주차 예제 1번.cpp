/* 1.연산식을 적어보세요(+와 -만 연산가능)1+2*/
#include <stdio.h>

int main()
{ 	int i, j;
	char h;
	printf("연산식을 적어 보세요(+와 -만가능)\n");
	scanf("%d",&i);
	scanf("%c",&h);
	scanf("%d",&j);
	switch(h){
		case'+':
		printf("%d%c%d=%d\n",i,h,j,i+j);
		break;
		
		case'-':
		printf("%d%c%d=%d\n",i,h,j,i-j);
	}
	
	return 0;
 } 
