/*7.  ������ ���ǿ� ���� ����������Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�, ����� ������Ѻ�����.

main�Լ����� �Է� ���� ������ ���� year�� ���Ͽ� �������� ������� ����ϴ�
void �� �Լ�
�Լ���: leaf(int year)*/

#include <stdio.h>

void leaf(int year);

int main(){
	int year;
	printf("year:");
	scanf("%d",&year);
	leaf(year);
	return 0;
}

void leaf(int year){
	if(year%4==0 && year%100 !=0 || year%400 ==0){
		printf("����\n");
	}
	else
	printf("���\n");
}
