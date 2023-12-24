/*4. do~while문을 사용하여 n명의 성적을 입력받고, 90점이상의 성적을 가진
학생수를 출력
 score는 0~100사이의 수이며, 이외의수를 입력한 경우, 반복문 탈출
 정수형변수 n, i,j,score*/
#include <stdio.h>

int main()
{ int i=1,n,score,j=0;
	printf("성적을 입력할 학생수:");
	scanf("%d",&n);

do{
	printf("%d번째 학생의 점수:",i);
	scanf("%d",&score);
	if(score>100 or score<0)
	break;//break 땜에 일부만 입력하고 끝났을 경우 printf를 마지막 n을 i로 바//
	
	i++;
	if(score>=90)꿈 
	j++;
}while(i<=n);

	printf("%d명중 90점 이상의 점수를 획득한 학생의 수:%d\n",n,j);
 
	return 0;
}
