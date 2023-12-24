// 배열 오름차순 정렬(삽입정렬)
#include <stdio.h>
#define SIZE 4
void insertionSort(int a[],int size);

int main(){
	
	int list[SIZE]={0};
	int i;
	printf("enter element, SIZE=%d\n",SIZE);
	for(i=0;i<SIZE;i++){
		scanf("%d",list+i);
	}
	insertionSort(list, SIZE);
	return 0;
}

void insertionSort(int a[],int size){
	int i,j,t;
	int temp;
	printf("\nlist:");
	for(t=0;t<size;t++) printf("%d",a[t]);
	
	printf("\n 실행 \n");
	for(i=1;i<size;i++){
		temp=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>temp)){//내림차순은 부등호만바꾸기 
		 
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		printf("\n step %d:",i);
		for(t=0;t<size;t++) printf("%3d",a[t]);
	}
	
}

 
