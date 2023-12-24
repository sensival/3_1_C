#include<stdio.h>

int main(){
	FILE *f=NULL;
	int i;
	char c;
	f=fopen("1.txt","w");
	if(f==NULL)
	printf("error");
	while((c=getchar())!='q'){
		fputc(c,f);
	}
	
	fclose(f);
	f=fopen("1.txt","r");
	while((c=fgetc(f))!=EOF)
	putchar(c);
	fclose(f);
	return 0;
}
	

