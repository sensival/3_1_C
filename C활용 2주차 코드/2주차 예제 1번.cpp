/* 1.������� �������(+�� -�� ���갡��)1+2*/
#include <stdio.h>

int main()
{ 	int i, j;
	char h;
	printf("������� ���� ������(+�� -������)\n");
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
