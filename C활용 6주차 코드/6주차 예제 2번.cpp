// ������ �ڵ带 ����غ���, ����� �����ϼ���.
#include <stdio.h>

int main(){
	int i=10;
	int *ip;
	ip=&i;
	
	printf("i�� �ּ�=%p\n", &i);
	printf("i�� �ּҰ� ����Ű�°�= %d\n",*(&i)) ;
	printf("������ ���� ip�� �ּ�=%p\n", &ip);
	printf("������ ���� ip�� ��=%d\n", ip);//%p�� �ϸ� ���� ���� 
	printf("������ ���� ip�� ����Ű�� ��=%d",*ip );

	return 0;
}
