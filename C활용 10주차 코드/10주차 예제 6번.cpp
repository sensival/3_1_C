#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

int main(){
	int a[SIZE]={0};
	int *m,j;
	m=(int *)malloc(SIZE*sizeof(int));
	for(j=0;j<SIZE;j++){
		printf("m[%d]를 입력하세요:",j);
		scanf("%d",(m+j)); 
		printf("a[%d]를 입력하세요:",j);
		scanf("%d",a+j);
		}
		
	for(j=0;j<SIZE;j++){
		printf("m[%d]=%d\n",j,*(m+j));
		printf("\n\n");
	}
	for(j=0;j<SIZE;j++){
		printf("m[%d]=%d\n",j,*(a+j));
		printf("\n\n");
	}
	free(m);
	return 0;
} 
