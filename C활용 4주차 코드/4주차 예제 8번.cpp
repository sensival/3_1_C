/*8.  다음의 조건에 따라 사용자정의함수를 정의하여 코드를 완성하고, 결과를 실행시켜보세요.

main함수에서 입력 받은 정수형 변수 year에 대하여 윤년일 경우1,  평년일 경우2를 출력하는
int 형 함수
함수명: leaf(int year)*/

#include <stdio.h>

int leaf(int year);

int main(){
	int year;
	int decision;
	printf("year:");
	scanf("%d",&year);
	decision=leaf(year);
	if (decision==1)
	printf("윤년\n");
	else if (decision==2)
	printf("평년\n");
	else
	printf("에러\n");
	return 0;
}

int leaf(int year){
	if(year%4==0 && year%100 !=0 || year%400 ==0){
		return 1;
	}
	else
		return 2;
}
