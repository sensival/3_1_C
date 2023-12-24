/* 2. 실수 타입으로 6명의 키 height를 0으로 초기화 하여 저장하는
배열 height2를 선언하고 반복문 사용하여 출력
N은 #define으로 설정할 것*/

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
