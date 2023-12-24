#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f1=NULL,*f2=NULL;
	int i, num;
	char tmp[10],name[10],c;
	f1=fopen("1.bin","wb");
	printf("name:");
	scanf("%s",name);
	fwrite(name,sizeof(char),10,f1);
	fclose(f1);
	f2=fopen("1.bin","rb");
	fread(tmp,sizeof(char),10,f2);
	for(i=0;i<10;i++)
	printf("%c",tmp[i]);//putchar(c);
	fclose(f2);
	return 0; 
}
