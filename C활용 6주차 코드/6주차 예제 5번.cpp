// ������ �ڵ带 ����غ���, ����� �����ϼ���.
#include <stdio.h>

int main(){
	int a[3]={1,2,3};
	int *ip;
	ip=a;
	
	printf("a�� �ּ�=%p\n",a);
	printf("a�ּҿ� ����ִ� =%d\n",*a);
	printf("ip�ȿ� ����ִ� ��=%p\n",ip);
	printf("ip�ȿ� ����ִ� �ּҰ� ����Ű�� ��=%d\n", *ip); 		

	return 0;
}
