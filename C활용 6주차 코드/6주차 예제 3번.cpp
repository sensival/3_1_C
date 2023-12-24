/* 다음의 조건을 갖는 코드를 작성해 보시오
정수형 변수 i
ip를 통하혀 i의 주소 확인
ip를 통하여 i에 들어있는 값을 20으로 변경
i의 값과 ip의 값을 출력 
*/ 
#include <stdio.h>

int main(){
	int i=10;
	int *ip;
	ip=&i;
	printf("i의 주소=%d\n", &i);
	printf("포인터변수 ip의 값= %d\n",ip);
	*ip=20;
	printf("i의 값=%d\n",i);
	printf("포인터 변수 ip가 가리키는 값=%d\n", *ip);
	

	return 0;
}
