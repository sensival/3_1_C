#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f1, *f2;
	int i;
	char buffer[100];
	f1=fopen("1.txt","r");
	if(f1==NULL)
	printf("error\n");
	f2=fopen("3.txt","w");
	if(f2==NULL)
	printf("error\n");	
	while(fgets(buffer,100,f1)!=NULL){//f1의 내용을 100byte 씩 읽어서 버퍼에 저장 
		fputs(buffer,f2); //buffer내용을 f2로 
	}
	fclose(f1);
	fclose(f2);
	return 0; 
}
