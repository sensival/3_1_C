/*������ ���ǿ� ���� �ڵ带 �ۼ��ϰ� �����غ�����
��ȣ���߱� ���α׷�
*rand �Լ��� ���� 1~20������ ������ ���ڸ� �˾Ƹ��ߴ� ���α׷�
�� 3���� ��ȸ�� ��*/
# define CRT_SECURE_NO_WARNINGS//dev c++�� ���������, visual studio�� �̰� �Ƚ��ָ� scanf_s�� ���ڿ� ���� �Լ� ��ߵ�. 
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int findNumber(int,int);
int main(){
	int i,j, real, num;
	srand(time(NULL));
	real=rand()%20+1;
	for(;;){
	printf("1~20������ ���� �� ������ ���ڸ� ���纸����. ��ȸ�� 3��\n");
	scanf("%d",&num);
	j=findNumber(num, real);
	if(j==1){
		printf("correct\n");
		break; //�̰� for�� ���� break ����, ���ٿ� ���α׷� ¥����--// 
		}
	else if(j==2){
		printf("again\n");
		}
		
	else if(j==0){
		printf("timeover\n real=%d", real);
		break;
		}
	}	
		
	
	return 0;
}

int findNumber(int num, int real){
	static int i=0,j;
	i++;
	if(i==3)
	return 0;
	if(num==real)
	return 1;
	else
	return 2;
	
}
