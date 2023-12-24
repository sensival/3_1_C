#include<stdio.h>
#include<string.h>

struct st{
	char name[20];
	int age;
	char address[100];
};
void printSt(struct st p){
	printf("이름:%s\n",p.name);
	printf("나이:%d\n",p.age);
	printf("주소:%s\n",p.address);
}

int main(){
	struct st p1;
	strcpy(p1.name,"김한양");
	p1.age=30;
	strcpy(p1.address,"서울시 성동구");
	
	printSt(p1); 
	return 0;
}
