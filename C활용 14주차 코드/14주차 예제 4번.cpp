#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

int main(){
	int a[SIZE]={0};
	int *m,j;
	m=(int*)malloc(SIZE*sizeof(int));
	for(j=0;j<SIZE;j++){
		printf("m[%d]�� �Է��ϼ���:",j);
		scanf("%d",(m+j));
		printf("a[%d]�� �Է��ϼ���:",j);
		scanf("%d", (a+j));
	}
	for(j=0;j<SIZE;j++){
		printf("m[%d]=%d\n",j,*(m+j));
	}
	printf("\n\n");
	for(j=0;j<SIZE;j++){
		printf("a[%d]=%d\n",j,*(a+j));
	}	
	free(m);
	
	
	return 0;
}
