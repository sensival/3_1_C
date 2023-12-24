/*전역 변수를 사용하여 다음의 코드를 실행해보고 각각의 i에 대하여 설명해보세요*/

#include<stdio.h>
int i; 
void printWhat();

int main(){
	printf("i(1)=%d\n",i);//0
	int i=10;
	printf("i(2)=%d\n",i);//10
	printWhat();
	return 0;
}

void printWhat(){
	printf("i(3)=%d\n", i);//0
}
