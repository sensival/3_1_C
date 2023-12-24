/*연산 결과를 맞추는 게임*/

#include<stdio.h>
int count(int); 
int main(){
	int ans;
	while(1){
		printf("1+2의 답은:");
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
	printf("%d번만에 맞추셨습니다. 축하합니다. \n", i);
	return 1;
	}
	else
	return 0;
}
