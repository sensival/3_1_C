#include<stdio.h>
int main(){
	
	FILE *f=NULL;
	f=fopen("2.txt","a");//2.txt �� "r" �ϸ� error 
	if(f==NULL)
	printf("error\n");
	fclose(f);
	return 0;
}
