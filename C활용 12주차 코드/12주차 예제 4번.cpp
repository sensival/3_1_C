// ���� �����ϴ� ���� ����� ���� ���α׷�// 
#include <stdio.h>
#include <ctype.h>
void countWord(char [],int);
 
int main(){
	char temp[50];
	printf("�����ϴ� ������ �������:");
	gets(temp);
	countWord(temp,50); 
	return 0; 
}

void countWord(char s[],int j){//j�¿��� 
	int i, k=0, temp=1;
	printf("your list: %s\n",s);
	
	for(i=0;s[i]!=NULL;++i){
		if(isalpha(s[i])){//1=true, 0=false 
			if (temp){
				k++;
				temp=0;//�� ������ ù���ڸ� �ν��Ҷ��� k++�ϵ��� 
			}
		}
		else
		temp=1;space������ �ٽ� ����ü ũ 
		
	}
	printf("my favorite fruit(num):%d",k);
}
