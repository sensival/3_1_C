#include <stdio.h>
#include <string.h> 
int main(){
	char s1[20];
	char s2[20];
	int i;
	printf("s1과 s2의 값을 입력하세요");
	gets(s1);
	gets(s2);
	printf("s1=%s s2=%s\n",s1,s2);
	printf("s1의길이:%d, s2의길이:%d\n", strlen(s1),strlen(s2));
	i=strcmp(s1,s2);
	printf("after cmp:%d\n",i);
	strcat(s1,s2);
	printf("s1=%s s2=%s\n",s1,s2);
	strcpy(s1,s2);
	printf("s1=%s s2=%s\n",s1,s2);
	return 0;
}
