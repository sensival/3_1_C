/*1~50까지 임의의 수를 출력하는 함수 get_rand를 작성해보세요*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void get_rand();

int main(){
	get_rand();
	return 0;
}


void get_rand(){
	srand((unsigned)time(NULL));
	int i;
	for(i=1; i<=5; i++) 
	printf("%d\n", rand()%50+1);
}
