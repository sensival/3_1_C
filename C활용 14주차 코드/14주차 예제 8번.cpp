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
		fputc(c,f);//���Ͽ� �ϳ��� ���ھ��� 
	}
	fclose(f);
	f=fopen("1.txt","r");
	while((c=fgetc(f))!=EOF)//�� �� 
	putchar(c);//�ϳ��� print 
	fclose(f);
	return 0; 
}
