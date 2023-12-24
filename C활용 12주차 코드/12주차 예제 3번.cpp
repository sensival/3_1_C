// 대문자-> 소문자, 소문자-> 대문자// 
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
