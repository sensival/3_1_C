/*7.  다음의 조건에 따라 사용자정의함수를 정의하여 코드를 완성하고, 결과를 실행시켜보세요.

main함수에서 입력 받은 정수형 변수 year에 대하여 윤년인지 평년인지 출력하는
void 형 함수
함수명: leaf(int year)*/

#include <stdio.h>

void leaf(int year);

int main(){
	int year;
	printf("year:");
	scanf("%d",&year);
	leaf(year);
	return 0;
}

void leaf(int year){
	if(year%4==0 && year%100 !=0 || year%400 ==0){
		printf("윤년\n");
	}
	else
	printf("평년\n");
}
