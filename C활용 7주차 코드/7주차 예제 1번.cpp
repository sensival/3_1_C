/*다음의 코드를 실행해 보세요*/

#include<stdio.h>
void iChange(int);
 
int main(){
	int i=1;
	printf("첫번째 i=%d\n", i);
	iChange(i);// i++해도 함수 끝나면 사라짐, ++i도 마찬가지 
	printf("두번째 i=%d\n", i);
	return 0;
}


void iChange(int i){
	++i;
}
