/*5.  ������ ���ǿ� ���� ����������Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�, ����� ������Ѻ�����.

main���� �Է¹��� n �����Ͽ� ,1~n������ ���� ���Ͽ� ��� �ϴ� void Ÿ���� �Լ�
�Լ��� sumN(int n)*/

#include <stdio.h>
void sumN(int n);

int main(){
	int n;
	printf("N:");
	scanf("%d",&n);
	sumN(n);
	return 0;

}


void sumN(int a){
	int i, sum=0;
	for(i=1;i<=a;i++){
		sum=sum+i;
	}
	printf("1~%d������ ��: %d\n",a,sum);
}

