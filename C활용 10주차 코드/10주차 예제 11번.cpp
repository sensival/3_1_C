//�ڵ带 �ۼ��ϰ� ����� �����غ����� 


#include<stdio.h>
#include<string.h>

struct st{
	char name[20];
	int age;
	char address[100];
};

void printSt(struct st p){
	printf("�̸�:%s\n", p.name);
	printf("����:%d\n", p.age);
	printf("�ּ�:%s\n", p.address);
}

int main(){
	struct st p1;
	strcpy(p1.name,"���Ѿ�");
	p1.age=30;
	strcpy(p1.address,"����� ������ �սʸ���220");
	printSt(p1); 
	return 0;
}
