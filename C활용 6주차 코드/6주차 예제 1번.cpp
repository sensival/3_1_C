// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int i=10;
	printf("i의 주소=%p\n", &i);
	printf("i의 주소가 가리키는 값=%d\n",*(&i));


	return 0;
}
