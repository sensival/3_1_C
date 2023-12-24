/*1. 함수 무작정 따라해보기: 다음의 코드의 결과를 출력해 보세요.*/

#include <stdio.h>

int creatValue(){
	int i;
	printf("값을 입력하세요:");
	scanf("%d",&i);
	return i;
} 

int main(){
	int i,j,k;
	i=creatValue();
	j=creatValue();
	k=creatValue();
	printf("i=%d, j=%d, k=%d\n",i,j,k);
	return 0;
}
