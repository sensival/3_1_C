#include <stdio.h>

int main(){
	char a;
	char b[10];
	int i=0;
	printf("a=");
	a=getchar();
	putchar(a);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	printf("\nb=");
	gets(b);
	puts(b);
	return 0;
}
