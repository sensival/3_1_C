//내가 만든거 
#include<stdio.h>

void *getArr(int a[],int n);
int main(){
	int b[5];
	int i;
	int *c;
	c=(int *)getArr(b,5);
	for(i=0;i<5;i++){
		printf("b[%d]=%d\n",i,*(c+i));

	}
	return 0;
}

void *getArr(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("b[%d]=",i);
		scanf("%d",a+i);
		
	
	}
	return a;
}
