/*���� ����� ���ߴ� ����*/

#include<stdio.h>
int count(int); 
int main(){
	int ans;
	while(1){
		printf("1+2�� ����:");
		scanf("%d",&ans);
		if(count(ans)==1)
		break;
	}
	
	return 0;
}

int count(int n){
	static int i=0;
	i++;
	if(n==3){
	printf("%d������ ���߼̽��ϴ�. �����մϴ�. \n", i);
	return 1;
	}
	else
	return 0;
}
