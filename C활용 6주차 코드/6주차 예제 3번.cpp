/* ������ ������ ���� �ڵ带 �ۼ��� ���ÿ�
������ ���� i
ip�� ������ i�� �ּ� Ȯ��
ip�� ���Ͽ� i�� ����ִ� ���� 20���� ����
i�� ���� ip�� ���� ��� 
*/ 
#include <stdio.h>

int main(){
	int i=10;
	int *ip;
	ip=&i;
	printf("i�� �ּ�=%d\n", &i);
	printf("�����ͺ��� ip�� ��= %d\n",ip);
	*ip=20;
	printf("i�� ��=%d\n",i);
	printf("������ ���� ip�� ����Ű�� ��=%d\n", *ip);
	

	return 0;
}
