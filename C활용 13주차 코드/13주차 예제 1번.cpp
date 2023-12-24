#include<stdio.h>
#define SIZE 5

int *getArr();
int main(){
	int *a;
	int i;
	a=getArr();
	for(i=0;i<SIZE;i++){
		printf("a[%d]=%d\n",i,a[i]);

	}
	return 0;
}

int *getArr(){
	int i;
	static int a[SIZE]={0};
	for(i=0;i<SIZE;i++){
		printf("a[%d]=",i);
		scanf("%d",a+i);
		
	}
	return a;
}
