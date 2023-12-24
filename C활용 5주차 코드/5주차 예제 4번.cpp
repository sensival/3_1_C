/* 4. 다음의 배열을 출력해보세요.
int a[3]={1,2,3};
int b[3]={1};
int c[3];
int d[3]={0};
int e[3]={0,0};*/
 
#include <stdio.h>

int main(){
	int a[3]={1,2,3};
	int b[3]={1};
	int c[3];
	int d[3]={0};
	int e[3]={0,0};
	int i;
	
	for(i=0;i<3;i++)
	printf("a[%d]=%d\n", i, a[i]);
	printf("\n");
	
	for(i=0;i<3;i++)
	printf("b[%d]=%d\n", i, b[i]);
	printf("\n");
	
	for(i=0;i<3;i++)
	printf("c[%d]=%d\n", i, c[i]);
	printf("\n");
	
	for(i=0;i<3;i++)
	printf("d[%d]=%d\n", i, d[i]);
	printf("\n");
	
	for(i=0;i<3;i++)
	printf("e[%d]=%d\n", i, e[i]);
	printf("\n");
	
	return 0;
}
