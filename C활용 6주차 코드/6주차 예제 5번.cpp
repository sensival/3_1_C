// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int a[3]={1,2,3};
	int *ip;
	ip=a;
	
	printf("a의 주소=%p\n",a);
	printf("a주소에 들어있는 =%d\n",*a);
	printf("ip안에 들어있는 값=%p\n",ip);
	printf("ip안에 들어있는 주소가 가리키는 값=%d\n", *ip); 		

	return 0;
}
