/*��Ģ ������ �����ϴ� ����������Լ��� �����Ӱ� 
�����ϰ� �ۼ��� ������*/

#include<stdio.h>
void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main(){
	int i, j, choice;
	printf("��Ģ������ ������ �� ���� �Է��ϼ���\n");
	scanf("%d%d", &i, &j);
	printf("� ������ �����Ͻðڽ��ϱ�? 1)add 2)sub 3)mul 4)div");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			add(i,j);
			break;
			
		case 2:
			sub(i,j);
			break;
			
		case 3:
			mul(i,j);
			break;
			
		case 4:
			div(i,j);
			break;
		
		default:
			printf("error\n:");
			break;
			
	}
	
	return 0;
	
}


void add(int a, int b){
	printf("%d+%d=%d\n", a, b, a+b);
	
}
void sub(int a, int b){
	printf("%d-%d=%d\n", a, b, a-b);
}
void mul(int a, int b){
	printf("%d*%d=%d\n", a, b, a*b);
}
void div(int a, int b){
	printf("%d/%d=%d\n", a, b, a/b);
}

