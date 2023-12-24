/*과일의 판매수량을 누적하여 관라하는 프로그램입니다.
어떤과일을 구입하시겠습니까? 1or 2or 3or 4or 5 선택 
과일의 판매 수량 fruit[n]=0 표시 반복*/

#include<stdio.h>
void count(int);
int main(){
	int n;
	while(1){
		printf("\n어떤 과일을 구입하시겠습니까?(0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박\n");
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
	printf("\n과일의 판매수량(0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박\n");
	for(i=0;i<5;i++){
		printf("fruit[%d]=%d\n", i, fruit[i]);
	}
}

