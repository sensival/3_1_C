// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int i=10;
	int *ip;
	ip=&i;
	
	printf("i의 주소=%p\n", &i);
	printf("i의 주소가 가리키는값= %d\n",*(&i)) ;
	printf("포인터 변수 ip의 주소=%p\n", &ip);
	printf("포인터 변수 ip의 값=%d\n", ip);//%p로 하면 위랑 같음 
	printf("포인터 변수 ip가 가리키는 값=%d",*ip );

	return 0;
}
