 #include <stdio.h>
 #include <string.h>
 int main(){
 	char s1[]="hi my name is lee minsun nice to meet you";
	char deli[]=" ";
	char *sperToken;
	sperToken=strtok(s1,deli);
	while(sperToken!=NULL){
		printf("word=%s\n",sperToken);
			sperToken=strtok(NULL,deli);
	} 
	return 0;
	  }

