#include<stdio.h>
int main(){
	
	FILE *f=NULL;
	f=fopen("2.txt","r");
	if(f==NULL)
	printf("error\n");
	fclose(f);
	return 0;
}
