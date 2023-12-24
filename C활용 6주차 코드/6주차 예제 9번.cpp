// 다음의 코드를 출력해보고, 결과를 설명하세요.
#include <stdio.h>

int main(){
	int i=10,*ip;// 4byte
	double f=20,*fp; //8byte
	char c='a', *cp;//1byte
	
	ip=&i;
	fp=&f;
	cp=&c;
	
	printf("i=%p ip=%p f=%p fp=%p c=%p cp=%p\n", &i, ip, &f, fp, &c, cp);
	ip--;
	fp--;
	cp--;
	
	printf("i=%p ip=%p f=%p fp=%p c=%p cp=%p\n", &i, ip, &f, fp, &c, cp);


	return 0;
}
