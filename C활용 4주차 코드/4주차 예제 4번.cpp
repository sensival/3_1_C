/*4. 다음의 조건에 따라 사용자 정의함수를 정의하여 코드를 완성하고
결과를 실행시켜보세요.
두 정수에 대하여 더하기를 수행한 후 결과를 반환하지 않는  함수 add_ print 
 변수: i,j,sum*/
 
 #include <stdio.h>
 
 void add_print(int i, int j);
 
 int main(){
	int i,j;
	printf("더하기 연산을 할 두개의 정수를 차례대로 입력하세요:");
	scanf("%d%d",&i,&j);
 	add_print(i,j);
 	
 	return 0;
 	
 	
 }
 
  void add_print(int i, int j){
  	
  	printf("두 수의 합:%d", i+j);
  }
