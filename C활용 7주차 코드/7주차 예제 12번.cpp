/*������ �Ǹż����� �����Ͽ� �����ϴ� ���α׷��Դϴ�.
������� �����Ͻðڽ��ϱ�? 1or 2or 3or 4or 5 ���� 
������ �Ǹ� ���� fruit[n]=0 ǥ�� �ݺ�*/

#include<stdio.h>
void count(int);
int main(){
	int n;
	while(1){
		printf("\n� ������ �����Ͻðڽ��ϱ�?(0:���, 1:��, 2:����, 3:������, 4:����\n");
		scanf("%d",&n);
		if (n>4||n<0)
		break;
		else
		count(n);
	}

	return 0;
	
}

void count(int n){
	static int fruit[5]={0};
	int i;
	fruit[n]+=1;
	printf("\n������ �Ǹż���(0:���, 1:��, 2:����, 3:������, 4:����\n");
	for(i=0;i<5;i++){
		printf("fruit[%d]=%d\n", i, fruit[i]);
	}
}

