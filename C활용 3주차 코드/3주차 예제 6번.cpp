/*6.n���� ������ �Է��� �� �հ� ��� ���ϱ� 
������ -1�� �Է��ϸ� �ݺ��� Ż��*/
#include <stdio.h>

int main()
{ double grade, sum=0.0, average;
	int num=1;
	do{
	
	printf("%d�� �л�����:", num);
	scanf("%lf",&grade);
	sum=sum+grade;//sum+=grade//
	average=sum/(num-1);
	num++;
	if(grade==-1)
	break;
	
	}while(1);
	printf("sum=%lf, average=%lf",sum, average);
	return 0;
}
