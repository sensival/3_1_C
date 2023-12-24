// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int a[3]={1,2,3};
	printf("a의 주소=%p\n",a);
	printf("a의 주소에 들어있는 값=%d\n", *(a+0));


	return 0;
}
