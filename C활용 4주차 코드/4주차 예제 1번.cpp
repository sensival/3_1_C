/*1. �Լ� ������ �����غ���: ������ �ڵ��� ����� ����� ������.*/

#include <stdio.h>

int creatValue(){
	int i;
	printf("���� �Է��ϼ���:");
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
