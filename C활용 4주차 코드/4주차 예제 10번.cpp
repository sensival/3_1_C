/*10. ������ ���ǿ� ���� ����������Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�, ����� ������Ѻ�����.

main���� �Է¹��� n �����Ͽ� ,1~n������ ���丮���� ��� �ϴ� int Ÿ���� �Լ�
�Լ���  fac(int n)
����Լ� �̿�*/
#include <stdio.h>

int fac(int n);
int main(){
	int n;
	printf("N:");
	scanf("%d",&n);
	printf("%d\n",fac(n));
	return 0;
}

int fac(int a){
	if( a<=1)
	return 1;
	else
	return fac(a-1)*a;
}
