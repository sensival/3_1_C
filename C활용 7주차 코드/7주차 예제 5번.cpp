/*static�� ����Ͽ� ������ �ڵ带 case1 �� case 2�� ���Ͽ� ���� ������ ������*/

#include<stdio.h>
int exampleStatic(int);

int main(){
	int i=0, j;
	for(j=1;j<=3;j++){
		printf("i=%d\n", exampleStatic(i));
	}
	
	return 0;
}
//case 1 -> 2,3,4 �̷��� �þ 
int exampleStatic(int i){
	static int si=1;
	si++;
	printf("si=%d\n",si);
	return i+si;
}

/* case2-> ��� 2���� 
int exampleStatic(int i){
	int si=1;
	si++;
	printf("si=%d\n",si);
	return i+si;-
}*/
