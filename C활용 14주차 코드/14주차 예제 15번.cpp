#include<stdio.h>
#define SIZE 5
int * getArr();
int oddArr();

int main(){
	int i;
	printf("È¦¼öÀÇ °¹¼ö=%d\n", oddArr());
	return 0;
}

int *getArr(){
	int i;
	static int a[SIZE]={0};
	for(i=0;i<SIZE;i++){
		printf("a[%d]=\n",i);
		scanf("%d", a+i);
	}
	return a;
}

int oddArr(){
	int *a,i,size;
	a=getArr();
	int odd=0;
	for(i=0;i<SIZE;i++){
		if(a[i]%2==1)
		odd++;
	}
	return odd;
}
