/*������ ���� n�� �ݿ� ���Ͽ� s ���� ���������� �����ϰ�
�� ���� ������ ���� ����Ϸ��� �մϴ�.*/
#include <stdio.h>
#define N 2
#define S 3

int main(){
	int num[N][S]={0};
	int sum[N]={0};
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<S;j++){
			printf("%d���� %d��° ����=",i+1,j+1);
			scanf("%d",&num[i][j]);
			sum[i]=sum[i]+num[i][j];
			printf("num[%d][%d]=%d\n",i,j,num[i][j]);
			
		}
		
	}
	for(i=0;i<N;i++){
	printf("%d���� ������ �� = %d\t %d���� ������ ��� = %f\n",i+1,sum[i],i+1,(float)sum[i]/S);
	}
	return 0; 
}
