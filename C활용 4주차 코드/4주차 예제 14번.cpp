/*1~50���� ������ ���� ����ϴ� �Լ� get_rand�� �ۼ��غ�����*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void get_rand();

int main(){
	get_rand();
	return 0;
}


void get_rand(){
	srand((unsigned)time(NULL));
	int i;
	for(i=1; i<=5; i++) 
	printf("%d\n", rand()%50+1);
}
