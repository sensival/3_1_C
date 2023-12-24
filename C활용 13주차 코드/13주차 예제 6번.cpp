// 배열 오름차순 정렬(선택정렬)
#include <stdio.h>
#define SIZE 6
void SelectionSort(int a[],int size);

int main(){
	
	int list[SIZE]={0};
	int i;
	printf("enter element, SIZE=%d\n",SIZE);
	for(i=0;i<SIZE;i++){
		scanf("%d",list+i);
	}
	SelectionSort(list, SIZE);
	return 0;
}

void SelectionSort(int a[],int size){
	int i,j,t,min;
	int temp;
	printf("\nlist:");
	for(t=0;t<size;t++) printf("%d",a[t]);
	
	printf("\n 실행 \n");
	for(i=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(a[j]<a[min]) min=j;//내림차순은 부등호만  
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("\n step %d:",i+1);
		for(t=0;t<size;t++) printf("%3d",a[t]);
	}
	
}

 
