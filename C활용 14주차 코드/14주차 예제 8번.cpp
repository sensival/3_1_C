#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f=NULL;
	int i;
	char c;
	f=fopen("1.txt","w");
	if(f==NULL)
	printf("error\n");
	while((c=getchar())!='q'){
		fputc(c,f);//파일에 하나씩 문자쓰기 
	}
	fclose(f);
	f=fopen("1.txt","r");
	while((c=fgetc(f))!=EOF)//읽 기 
	putchar(c);//하나씩 print 
	fclose(f);
	return 0; 
}
