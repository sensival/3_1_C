/*4. do~while���� ����Ͽ� n���� ������ �Է¹ް�, 90���̻��� ������ ����
�л����� ���
 score�� 0~100������ ���̸�, �̿��Ǽ��� �Է��� ���, �ݺ��� Ż��
 ���������� n, i,j,score*/
#include <stdio.h>

int main()
{ int i=1,n,score,j=0;
	printf("������ �Է��� �л���:");
	scanf("%d",&n);

do{
	printf("%d��° �л��� ����:",i);
	scanf("%d",&score);
	if(score>100 or score<0)
	break;//break ���� �Ϻθ� �Է��ϰ� ������ ��� printf�� ������ n�� i�� ��//
	
	i++;
	if(score>=90)�� 
	j++;
}while(i<=n);

	printf("%d���� 90�� �̻��� ������ ȹ���� �л��� ��:%d\n",n,j);
 
	return 0;
}
