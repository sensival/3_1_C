/* i�� 6�� ���ö����� �ֻ����� �����ϴ�. 
i�� 6�̳��ö����� 
1~6�� ���� �󵵸� üũ�մϴ�.*/


#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
 void game();

 int main(){
	 game();
	 return 0;
 }
 
  void game(){
  	srand((unsigned)time(NULL));
  	int freq[6]={0};
  	
 	int i, j=0, k;
 	for(;;){
 		j++;
 		i=rand()%6+1;
 		printf("i=%d\n",i);
 		freq[i-1]++;
 		if(i==6)
 		break;
	 }
	for(k=0; k<6; k++){
		printf("%d = %d��\n",k+1, freq[k]);
	}
}
