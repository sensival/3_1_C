#include <stdio.h>

int main(){
	char a;
	char b[10];
	int i=0;
	printf("a=");
	scanf("%c",&a);
	printf("b=");
	scanf("%s",b);
	while(b[i]!=NULL){
		printf("%c", b[i]);
		i++;
	}
	printf("\na=%c b=%s\n",a,b);
	return 0;
}
