/*6.n명의 성적을 입력한 후 합과 평균 구하기 
성적에 -1을 입력하면 반복문 탈출*/
#include <stdio.h>

int main()
{ double grade, sum=0.0, average;
	int num=1;
	do{
	
	printf("%d번 학생성적:", num);
	scanf("%lf",&grade);
	sum=sum+grade;//sum+=grade//
	average=sum/(num-1);
	num++;
	if(grade==-1)
	break;
	
	}while(1);
	printf("sum=%lf, average=%lf",sum, average);
	return 0;
}
