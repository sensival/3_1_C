/*9. ������ ���ǿ� ���� ����������Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�, ����� ������Ѻ�����.

main���� �Է¹��� n �����Ͽ� ,1~n������ ���� ���Ͽ� ��� �ϴ� int Ÿ���� �Լ�
�Լ��� sumN(int n)
����Լ� �̿�*/

#include <stdio.h>

int sumN(int n);
int main(){
	int n;
	printf("N:");
	scanf("%d",&n);
	printf("%d\n",sumN(n));
	return 0;
}

int sumN(int a){
	if( a<=1)
	return 1;
	else
	return sumN(a-1)+a;
}
