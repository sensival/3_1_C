/*8.  ������ ���ǿ� ���� ����������Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�, ����� ������Ѻ�����.

main�Լ����� �Է� ���� ������ ���� year�� ���Ͽ� ������ ���1,  ����� ���2�� ����ϴ�
int �� �Լ�
�Լ���: leaf(int year)*/

#include <stdio.h>

int leaf(int year);

int main(){
	int year;
	int decision;
	printf("year:");
	scanf("%d",&year);
	decision=leaf(year);
	if (decision==1)
	printf("����\n");
	else if (decision==2)
	printf("���\n");
	else
	printf("����\n");
	return 0;
}

int leaf(int year){
	if(year%4==0 && year%100 !=0 || year%400 ==0){
		return 1;
	}
	else
		return 2;
}
