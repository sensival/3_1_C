//2.
#include <stdio.h>
void printArr(int a[],int);
int MaxArr(int a[], int);

int main(){
	int a[5]={0};
	int i;
	for(i=0;i<5;i++){
		printf("a[%d]:\n",i);
		scanf("%d",a+i);
	}
	printArr(a,5);
	printf("\nmax value=%d\n",MaxArr(a,5));
	return 0;
}

void printArr(int a[], int n){
	int i;
	for(i=0;i<5;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
}

int MaxArr(int a[], int n){
	int i, max;
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	
	return max;
}
