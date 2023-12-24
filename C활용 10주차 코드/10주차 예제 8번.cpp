//코드를 작성하고 결과를 유추해보세욘 

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

int main(){
	int a[SIZE]={0};
	char *name; 
	int *m,j;
	m=(int *)malloc(SIZE*sizeof(int));
	name=(char *)malloc(20*sizeof(char));
	printf("name:\n");
	scanf("%s",name);
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
	printf("name=%s\n",name);
	free(m);
	return 0;
} 
