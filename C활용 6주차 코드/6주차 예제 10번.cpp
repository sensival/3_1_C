// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int a[3]={1,2,3}, i;
	int *ip;
	ip=a;
	for(i=0; i<3; i++){
		printf("a[%d]=%d\n", i,*(ip));
		ip++;
		
	}


	return 0;
}
