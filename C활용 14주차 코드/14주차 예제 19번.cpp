//num level, name의 멤버를 갖는 user 구조체에 대하여 SIZE만큼 동적메모리 할당함. SIZE 만큼 데이터 입력후 받은데이터 출력

#include<stdio.h>
#include<stdlib.h> 
#define SIZE 3
struct user{
	int num;
	char level;
	char name[50];
};

int main(){
	int i;
	struct user *puser;
	puser=(struct user *)malloc(SIZE*sizeof(struct user));
	if(puser==NULL){
	printf("error\n");
	exit(1);		
	}
	for(i=0;i<SIZE;i++){
		scanf("%d", &puser[i].num);
		getchar();
		scanf("%c", &puser[i].level);
		getchar();	
		gets(puser[i].name);	
	}
	for(i=0;i<SIZE;i++)
		printf("%d %c %s\n", puser[i].num, puser[i].level, puser[i].name);
	return 0;
	
}
