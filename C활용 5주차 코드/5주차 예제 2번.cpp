/* 2. �Ǽ� Ÿ������ 6���� Ű height�� 0���� �ʱ�ȭ �Ͽ� �����ϴ�
�迭 height2�� �����ϰ� �ݺ��� ����Ͽ� ���
N�� #define���� ������ ��*/

#include <stdio.h> 
#define N 6

int main(){
	float height[N]={0};
	int i;
	for(i=0;i<N;i++){
		printf("height[%d]=%f\n",i,height[i]);
	}
	return 0;
}
