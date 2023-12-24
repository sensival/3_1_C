// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int a[3], i;
	int *ip;
	ip=a;
	for(i=0;i<3;i++){
		printf("a[%d]의 값을 입력하세요:", i);
		scanf("%d",&ip[i]);
	}

	for(i=0;i<3;i++){
		printf("a[%d]=%d\n",i,a[i]);
		printf("a[%d]=%d\n",i,*(a+i));
		printf("a[%d]=%d\n",i,ip[i]);
		printf("a[%d]=%d\n\n",i,*(ip+i));
		
	}
	return 0;
} 
