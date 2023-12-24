/*2.  다음의 코드를 실행해 보세요*/
#include <stdio.h>
 
 int creatValue();
 
 int main(){
 	int i,j,k;
 	i=creatValue();
	j=creatValue();
	k=creatValue();
	printf("i=%d, j=%d, k=%d\n",i,j,k);
	return 0;
 }
 
 int creatValue(){
	int i;
	printf("값을 입력하세요:");
	scanf("%d",&i);
	return i;
} 
