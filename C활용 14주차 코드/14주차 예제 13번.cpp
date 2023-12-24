#include<stdio.h>
#define SIZE 5
void printArr(int a[], int);
int main(){
	int a[SIZE]={0};
	int i;
	for(i=0;i<SIZE;i++){
		printf("a[%d]:\n", i);
		scanf("%d",a+i);
	}
	printArr(a,SIZE);
	return 0;
}

void printArr(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
