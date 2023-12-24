#include<stdio.h>
#define MAX(x,y)(x>y?x:y)
#define SQ2(x) x*x

int main(){
	int x=5, y=6;
	printf("ans1=%d\n", MAX(x,y));
	printf("ans2=%d\n", SQ2(x+y));
	return 0;
} 
