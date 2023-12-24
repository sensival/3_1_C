/* 3. 실수타입으로 6명의 키를 저장하는 배열 height2
반복문 이용하여 모든 요소를 입력 후 출력*/

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
