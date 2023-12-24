/*static을 사용하여 다음의 코드를 case1 과 case 2에 대하여 각각 실행해 보세요*/

#include<stdio.h>
int exampleStatic(int);

int main(){
	int i=0, j;
	for(j=1;j<=3;j++){
		printf("i=%d\n", exampleStatic(i));
	}
	
	return 0;
}
//case 1 -> 2,3,4 이렇게 늘어남 
int exampleStatic(int i){
	static int si=1;
	si++;
	printf("si=%d\n",si);
	return i+si;
}

/* case2-> 계속 2가됨 
int exampleStatic(int i){
	int si=1;
	si++;
	printf("si=%d\n",si);
	return i+si;-
}*/
