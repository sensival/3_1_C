/* 다음의 조건에 대하여 코드를 작성하고 결과를 출력해보세요
10명의 학생에 대하여 실수 (float)형태의 점수를 각각 입력 받고
점수의 합과 평균을 구하세여*/ 
#include <stdio.h>

int main(){
	float score[10];
	float *fp, sum=0, avg;
	int i;
	fp=score;
	for(i=0;i<10;i++){
		printf("%d번째 학생의 성적:",i+1);
		scanf("%f",fp+i);
		sum=sum+*(fp+i);
	}
	for (i=0;i<10;i++){
		printf("score[%d]=%f\n", i, score[i]);
	}
	printf("sum=%f, avg=%f\n", sum, sum/10);
	return 0;
} 
