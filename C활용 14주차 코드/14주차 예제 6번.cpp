#include<stdio.h> 
#include<stdlib.h> 
#define MAX(x,y) (x>y?x:y)

int vari=10;
int getVal();
void printBigVal(int, int);
int main(){
	int i,j;
	i=getVal();
	j=getVal();
	printBigVal(i,j);
	return 0;
}
int getVal(){
	int n;
	printf("������ �Է��ϼ���:\n");
	scanf("%d", &n);
	return n;
	
}
void printBigVal(int n1, int n2){
	printf("x=%d y=%d BigVal=%d\n",n1,n2,MAX(n1,n2));

}
	
