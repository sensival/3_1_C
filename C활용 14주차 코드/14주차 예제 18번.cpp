/* ���� ���� SIZE ��ŭ �����޸𸮸� �Ҵ��ϰ� ������ �����ѵ�
���*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main (){
	int *n;
	int i;
	n=(int *)malloc(SIZE*sizeof(int));
	if(n==NULL){
		printf("error\n");
		exit(1);
	}
	for(i=0;i<SIZE;i++){
		printf("%d��° num=", i+1);
		scanf("%d", (n+i));
	}
	for(i=0;i<SIZE;i++){
		printf("%d��° num=%d\n", i+1,*(n+i));
	}
	free(n);
	return 0;
}
