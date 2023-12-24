/*3. 다음의 조건에 따라 사용자 정의함수를 정의하여 코드를 완성하고
결과를 실행시켜보세요.
두 정수에 대하여 더하기를 수행한 후 결과를 반환하는 함수add
 변수: i,j,sum*/
 
#include <stdio.h>
 
 int add(int i, int j);
 
 int main(){
 	int i, j, sum;
 	printf("더하기 연산을 할 두개의 정수를 차례로 입력하세요.");
 	scanf("%d%d", &i,&j);
 	sum=add(i,j);
 	printf("두 수의 합:%d\n", sum);
 	return 0;
 	 
 }
 
 
 int add(int i, int j){
 	return i+j;
 }
