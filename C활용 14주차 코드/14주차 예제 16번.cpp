#include<stdio.h>
void printAr(int *a, int size);
void swap(int *, int *);

int main(){
	int a[5]={0};
	int i,j;
	for(i=0;i<5;i++){
		printf("a[%d]=\n", i);
		scanf("%d",&a[i]);
	}
	printAr(a,5);
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(a[i]>a[j])
			swap(&a[i],&a[j]);
		}
	}
	
	printAr(a,5);
	return 0;
}

void swap (int *n1, int *n2){
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}

void printAr(int a[],int size){
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	printf("a[%d]=%d\t",i,a[i]);
}
