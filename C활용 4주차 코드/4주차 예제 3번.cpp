/*3. ������ ���ǿ� ���� ����� �����Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�
����� ������Ѻ�����.
�� ������ ���Ͽ� ���ϱ⸦ ������ �� ����� ��ȯ�ϴ� �Լ�add
 ����: i,j,sum*/
 
#include <stdio.h>
 
 int add(int i, int j);
 
 int main(){
 	int i, j, sum;
 	printf("���ϱ� ������ �� �ΰ��� ������ ���ʷ� �Է��ϼ���.");
 	scanf("%d%d", &i,&j);
 	sum=add(i,j);
 	printf("�� ���� ��:%d\n", sum);
 	return 0;
 	 
 }
 
 
 int add(int i, int j){
 	return i+j;
 }
