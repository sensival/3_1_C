//다음을 실행해 보세요

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *i,j;
	i=(int *)calloc(3*sizeof(int));
	for(j=0;j<10;j++){
		printf("%d번째 값:",j+1);
		scanf("%d",(i+j)); 
		}
		
	for(j=0;j<10;j++){
		printf("%d\n",*(i+j));
	}
	free(i);
	return 0;
} 
