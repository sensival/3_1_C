/*�ΰ��� �Է¹޾� ū���� ����ϴ� ���α׷� �Դϴ�. ����� �������� �ڵ带 �ϼ��� ������.*/

#include <stdio.h>
int big(int a, int b);

int main(){
	int i,j;
	printf("�� ���� �Է��ϼ���.\n");
	scanf("%d%d",&i,&j);
	big(i,j);
	return 0;
	
} 

int big(int a, int b){
	if (a>b)
	printf("�� �� �� ū ��:%d\n",a);
	else if (a<b)
	printf("�� �� �� ū ��:%d\n",b);
	else
	printf("�����Դϴ�.\n",b);
}

/*int big(int a, int, b){
int max;
max=(a>b)? a : b;
return max; */




