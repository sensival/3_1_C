/* i가 6이 나올때까지 주사위를 던집니다. 
i가 6이나올때까지 몇번시도했는지 횟수를 출력하세여*/


#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
 
 
 int main(){
 	srand((unsigned)time(NULL));
 	int i, j=0;
 	for(;;){
 		j++;
 		i=rand()%6+1;
 		printf("i=%d\n",i);
 		if(i==6)
 		break;
	 }
	 printf("총 %d번 만에 6 나옴",j);
	 return 0;
 }
 
