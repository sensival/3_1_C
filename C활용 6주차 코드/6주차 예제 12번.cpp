/*������ ���ǿ� ���� �ڵ带 �ۼ��ϰ� ����� ���
3���� �л��� ���Ͽ� �Ǽ� float ������ ������ ����
�Է¹ް� ����ϴ� �ڵ带 �ۼ��غ�����*/

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
