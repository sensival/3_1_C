/*���� ������ ����Ͽ� ������ �ڵ带 �����غ��� ������ i�� ���Ͽ� �����غ�����*/

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
