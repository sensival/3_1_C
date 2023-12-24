// 내가 조아하는 과일 몇개인지 세는 프로그램// 
#include <stdio.h>
#include <ctype.h>
void countWord(char [],int);
 
int main(){
	char temp[50];
	printf("조와하는 과일을 적어보세욘:");
	gets(temp);
	countWord(temp,50); 
	return 0; 
}

void countWord(char s[],int j){//j는왜있 
	int i, k=0, temp=1;
	printf("your list: %s\n",s);
	
	for(i=0;s[i]!=NULL;++i){
		if(isalpha(s[i])){//1=true, 0=false 
			if (temp){
				k++;
				temp=0;//각 어절의 첫글자를 인식할때만 k++하도록 
			}
		}
		else
		temp=1;space만나면 다시 어절체 크 
		
	}
	printf("my favorite fruit(num):%d",k);
}
