// �빮��-> �ҹ���, �ҹ���-> �빮��// 
#include <stdio.h>
#include <ctype.h>
int main(){
	char a='a';
	if(islower(a)){
		printf("a=%c\n",a-32);
	}
	char B='B';
	if(isupper(B)){
		printf("B=%c\n",B+32);
	}
	return 0; 
}
