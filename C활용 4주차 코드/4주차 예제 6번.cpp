/*6.  ������ ���ǿ� ���� ����������Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�, ����� ������Ѻ�����.

����� ���� �Լ����� �Է¹��� n �����Ͽ� ,1~n������ ���� ���Ͽ� ��� �ϴ� void Ÿ���� �Լ�
�Լ���: sumN(int n)*/

#include <stdio.h>

void sumN();

int main(){

	sumN();
	return 0;

}


void sumN(){
	int n,  i, sum=0;
	printf("N:");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("1~%d������ ��: %d\n",n,sum);
}

