// �迭 �������� ����(��������)
 // �迭 �������� ����
#include <stdio.h>
#define SIZE 4
void bubbleSort(int a[],int size);

int main(){
	
	int list[SIZE]={0};
	int i;
	printf("enter element, SIZE=%d\n",SIZE);
	for(i=0;i<SIZE;i++){
		scanf("%d",list+i);
	}
	bubbleSort(list, SIZE);
	return 0;
}

void bubbleSort(int a[],int size){
	int i,j,t;
	int temp;
	printf("\nlist:");
	for(t=0;t<size;t++) printf("%d",a[t]);
	
	printf("\n ���� \n");
	for(i=size-1;i>0;i--){
		printf("\n step %d\n",size-i);
		
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){//���������� �ε�ȣ���ٲٱ� 
		
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			printf("\n\t");
			for(t=0;t<size;t++) printf("%3d",a[t]);
		}

	}

}

