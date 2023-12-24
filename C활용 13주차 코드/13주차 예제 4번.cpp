// 연습문제 1 
#include <stdio.h>
void printArr(int a[],int);
 
int main(){
	int a[5]={0};
	int i;
	for(i=0;i<5;i++){
		printf("a[%d]:\n",i);
		scanf("%d",a+i);
	}
	printArr(a,5);
	
	return 0;
}

void printArr(int a[], int n){
	int i;
	for(i=0;i<5;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
}
