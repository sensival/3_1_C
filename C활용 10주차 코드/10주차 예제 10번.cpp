//코드를 작성하고 결과를 유추해보세욘 

# include<stdio.h>
# include<stdlib.h>
# define MAX(x,y) (x>y?x:y) 
int vari=10;
int getVal();
void printBigVal(int, int);

int main(){
	int i,j;
	i=getVal();
	j=getVal();
	printf("%d\n", i);
	printf("%d\n", j);
	printBigVal(i,j);
	return 0;
}

int getVal(){
	int n;
	printf("점수를 입력하세요:\n");
	scanf("%d",&n);
	return n;
}

void printBigVal(int n1, int n2){
	printf("x=%d y=%d BigVal=%d\n",n1,n2, MAX(n1,n2));
}
