/*N명의 학생들의 봉사시간을 *로 표시*/

# include <stdio.h>
# define N 5

int main(){
	int num[N]={0};
	int i,j;
	for(i=0;i<5;i++){
		printf("%d번 째 학생의 봉사시간: ",i+1);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<=num[i];j++){
			printf("*");
		}
			printf("\n");
	
	}
	return 0;
} 
