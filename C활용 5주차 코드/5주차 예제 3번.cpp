/* 3. �Ǽ�Ÿ������ 6���� Ű�� �����ϴ� �迭 height2
�ݺ��� �̿��Ͽ� ��� ��Ҹ� �Է� �� ���*/

#include <stdio.h>
#define N 6

int main() {
	float height[N];
	int i, j;
	for(i=0;i<N;i++){
		printf("height[%d]=", i);
		scanf("%f",&height[i]);
	}
	
	for(j=0;j<N;j++){
		printf("height[%d]=%f\n",j,height[j]);
	}
	return 0;
}
