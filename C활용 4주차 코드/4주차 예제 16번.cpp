/* i�� 6�� ���ö����� �ֻ����� �����ϴ�. 
i�� 6�̳��ö����� ����õ��ߴ��� Ƚ���� ����ϼ���*/


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
	 printf("�� %d�� ���� 6 ����",j);
	 return 0;
 }
 
