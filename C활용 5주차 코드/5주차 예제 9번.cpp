/* 9. 3������ ���Ǹ� ��� �л��� ���� 2���Դϴ�.
�� �л��� ������ �Է� �ް�, �л��� ������ �հ� ����� 
���غ�����
int score[2][3]; */

#include <stdio.h>

int main(){
	int score[2][3];
	int i,j,sum[2]={0}, avg[2]={0};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		
		printf("%d�� �л��� %d��° �����Է�:",i+1, j+1);
		scanf("%d",&score[i][j]);
		sum[i]=sum[i]+score[i][j];
		
		}
		avg[i]=sum[i]/3.0;
	}
	
	for(i=0;i<2;i++){
		printf("%d��° �л��� ����: %d, ���: %d \n", i+1,sum[i], avg[i]);
	}
	return 0;
}
