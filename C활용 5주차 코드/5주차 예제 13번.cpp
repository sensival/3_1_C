/*다음과 같이 n개 반에 대하여 s 개의 과목점수를 저장하고
각 반의 성적의 합과 평균, 각과목의 합과 평균을 출력하려고 합니다.*/
#include <stdio.h>
#define N 2
#define S 3

int main(){
	int num[N][S]={0};
	int sum[N]={0};
	int sum2[S]={0};
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<S;j++){
			printf("%d반의 %d번째 성적=",i+1,j+1);
			scanf("%d",&num[i][j]);
			sum[i]+= num[i][j];
			//sum[i]=sum[i]+num[i][j];//
			printf("num[%d][%d]=%d\n",i,j,num[i][j]);
			
		}
		
	}
	for(i=0;i<N;i++){
	for(j=0;j<S;j++){
		sum2[j]+=num[i][j];
	}
}
	for(i=0;i<N;i++){
	printf("%d반의 성적의 합 = %d\t %d반의 성적의 평균 = %f\n",i+1,sum[i],i+1,(float)sum[i]/S);
	}
	for(j=0;j<S;j++){
	printf("%d번째 과목성적의 합 = %d\t %d번째 과목  성적의 평균 = %f\n",j+1,sum2[j],j+1,(float)sum2[j]/N);
	}
	return 0; 
}
