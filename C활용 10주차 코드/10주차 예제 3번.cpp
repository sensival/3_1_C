//������ ������ ������

#include<stdio.h>
#include<stdlib.h>
#define SIZE 12
int main(){
	int *i,j;
	i=(int *)malloc(3*sizeof(int));
	i=(int *)realloc(SIZE*sizeof(int));
	for(j=0;j<10;j++){
		printf("%d��° ��:",j+1);
		scanf("%d",(i+j)); 
		}
		
	for(j=0;j<10;j++){
		printf("%d\n",*(i+j));
	}
	free(i);
	return 0;
} 
