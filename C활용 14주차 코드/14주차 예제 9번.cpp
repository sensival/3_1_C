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
	while(fgets(buffer,100,f1)!=NULL){//f1�� ������ 100byte �� �о ���ۿ� ���� 
		fputs(buffer,f2); //buffer������ f2�� 
	}
	fclose(f1);
	fclose(f2);
	return 0; 
}
