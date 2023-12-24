/*다음의 코드를 실행시켜보세요*/

#include<stdio.h>
int i= 100;
void printVal(int);
void printVal2();
int main(){
	int i=1;
	printf("i=%d\n", i);
	printVal(i);
	printVal2();
	printf("i=%d\n",i);
	return 0;
	
}

void printVal(int i){
	printf("i=%d\n",i);
}
void printVal2(){
	printf("i=%d\n",i);
}
