/*11. for���� �̿��� ������(2~5) ��� ���α׷�
n���� ����*/
#include <stdio.h>

int main()
{	int n;
	int i,j;
	
	 printf("2-5�ܱ��� ����մϴ�.\n2-5�� �� ������ ���� �Է��ϼ���\ndan:");
	 scanf("%d",&n);
	 for(i=2;i<=5;i++){
	 	printf("\n");
	 	if(i==n)
	 	continue;
	 	printf("<<%d��>>\n",i);
	 	for(j=1;j<=9;j++)
	 	printf("%d*%d=%d \n", i,j,i*j );//for, if������ȣ������ �������常// 
	 }
	
	return 0;
}
