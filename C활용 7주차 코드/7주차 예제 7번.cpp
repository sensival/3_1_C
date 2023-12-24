/*다음의 조건에 따라 코드를 작성하고 실행해보세요
번호맞추기 프로그램
*rand 함수로 얻은 1~20까지의 임의의 숫자를 알아맞추는 프로그램
총 3번의 기회를 줌*/
# define CRT_SECURE_NO_WARNINGS//dev c++는 상관없지만, visual studio는 이거 안써주면 scanf_s로 문자열 따로 함수 써야됨. 
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int findNumber(int,int);
int main(){
	int i,j, real, num;
	srand(time(NULL));
	real=rand()%20+1;
	for(;;){
	printf("1~20사이의 숫자 중 임의의 숫자를 맞춰보세요. 기회는 3번\n");
	scanf("%d",&num);
	j=findNumber(num, real);
	if(j==1){
		printf("correct\n");
		break; //이건 for에 대한 break 실행, 업다운 프로그램 짜보기--// 
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
