#include<stdio.h>
#define SIZE 4
void ssSort(int a[], int size);
void SelectionSort(int a[], int size);
void bubbleSort(int a[], int size);
void insertionSort(int a[], int size);
int partition(int a[], int begin, int end);
void quickSort(int a[], int begin, int end);

int main(){
	int list[SIZE]={0};
	int i, choice;
	printf("enter element. SIZE=%d\n",SIZE);
	for(i=0;i<SIZE;i++){
		scanf("%d", list+i);
	}
	printf("select sorting method (1. sequential 2. selection 3.bubble 4.insertion 5.quick 6.quit):\n");
	scanf("%d",&choice);	
	while(choice!=6){
		switch(choice){
			case 1: ssSort(list, SIZE); break;
			case 2: SelectionSort(list, SIZE); break;
			case 3: bubbleSort(list, SIZE); break;
			case 4: insertionSort(list, SIZE); break;
			case 5: quickSort(list, 0, SIZE-1); break;
			default: printf("wrong number. retry!\n");
			
		}
		printf("\n");
		printf("enter element. SIZE=%d\n",SIZE);
		for(i=0;i<SIZE;i++){
		scanf("%d", list+i);}
		printf("select sorting method (1. sequential 2. selection 3.bubble 4.insertion 5.quick 6.quit):\n");
		scanf("%d",&choice);	
	}
	return 0;
}

void ssSort(int a[], int size){
	int i,j,t,min;
	int temp;
	printf("\nlist:");
	for(t=0; t<size;t++) printf("%d",a[t]);
	
	printf("\n����\n");
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("\n step %d:", i+1);
		for(t=0;t<size;t++) printf("%3d", a[t]);
	}
}
	
void SelectionSort(int a[], int size){
	int i,j,t,min;
	int temp;
	printf("\n list: ");
	for(t=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(a[j]<a[min]) min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("\n step %d :",i+1);
		for(t=0;t<size;t++) printf("%3d", a[t]);
	}
}
void bubbleSort(int a[], int size){
	int i,j,t;
	int temp;
	printf("\nlist:");
	for(t=0;t<size;t++) printf("%d",a[t]);
	printf("\n����\n");
	for(i=size-1;i>0;i--){
		printf("\nstep %d\n",size-1);
		for(j=0;j<i;i++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			printf("\n\t");
			for(t=0;t<size;t++) printf("%3d", a[t]);
		}
	}

}
	
void insertionSort(int a[], int size){
	int i,j,t;
	int temp;
	printf("\nlist:");
	for(t=0;t<size;t++) printf("%d",a[t]);
	printf("\n����\n");
	for(i=1;i<SIZE;i++){
		temp=a[i];
		j=i;
		while((j>0)&&(a[j-1]>temp)){
			a[j]=a[j-1];
			j=i-1;
		}
	a[j]=temp;
	printf("\n%d�ܰ�:", i);
	for(t=0; t<size; t++) printf("%4d",a[t]);			
	}
}
int partition(int a[], int begin, int end){
	int pivot, L, R, t;
	static int i;
	int temp;
	L= begin;
	R= end;
	pivot=(int)((begin+end)/2.0);
	
	printf("\n step %d: pivot=%d ]\n", ++i, a[pivot]);
	while(L<R){
		while((a[L]<a[pivot])&&(L<R)) L++;
		while((a[R]>=a[pivot])&&(L<R)) R--;
		if(L<R){
			temp=a[L];
			a[L]=a[R];
			a[R]=temp;
			
			if(L==pivot)
				pivot=R;
		}
		for(t=0;t<SIZE;t++) printf("%d", a[t]);
		printf("\n");
		
	}
	
	temp=a[pivot];
	a[pivot]=a[R];
	a[R]=temp;
	for(t=0;t<SIZE;t++) printf("%d", a[t]);
	printf("\n");
	return R;
}
void quickSort(int a[], int begin, int end){
	int p;
	if(begin<end){
		p=partition(a, begin, end);
		quickSort(a, begin, p-1);
		quickSort(a, p+1, end);
	}

}
	

