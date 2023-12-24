/*다음의 조건에 대해 코드를 작성하고 결과를 출력
3명의 학생에 대하여 실수 float 형태의 점수를 각각
입력받고 출력하는 코드를 작성해보세요*/

#include <stdio.h>
#define N 3
void getVal(float *, int) ;
int main(){
	int i;
	float score[N]={0};
	getVal(score, N);
	for(i=0; i<N; i++){
		printf("score[%d]=%f", i, score[i]);
	}
	
	return 0;
}  

void getVal(float *a, int b) {
	int i;
	for(i=0;i<b;i++){
		printf("a[%d]:"i);
		scanf("%f", a+i);//&a[i]
	}
}
