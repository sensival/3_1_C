/*7, 6�� �迭�� �ݺ������*/
#include <stdio.h>

int main(){
	int i, j;
	int score2[3][2]={{200,100},{180,90},{150,75}};
	
	for(i=0;i<3;i++){
		 printf("%d�� �л��� ������ ���: ", i+1);
		 
		for(j=0;j<2;j++){
		printf("score2[%d][%d]=%d \t",i,j,score2[i][j]);
		}
		printf("\n");
		}
	
	return 0;
		} 
