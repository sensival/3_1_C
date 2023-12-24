/* 6. 3행 2열의 값을가진 배열 출력*/

#include <stdio.h>

int main(){
	int i, j;
	int score2[3][2]={{200,100},{180,90},{150,75}};
	
	for(i=0;i<3;i++){
		
		for(j=0;j<2;j++){
			printf("score[%d][%d]=%d \n",i,j,score2[i][j]);
		}
	}
	
	return 0;
} 
