/**/
#include <stdio.h>

int main(){
	int num[][2]={1,2,3,4,5,6,7,8};
	int i, j, k ;
	i=sizeof(num)/sizeof(num[0]);
	for (j=0;j<i;j++){
		for(k=0;k<2;k++){
			printf("num[%d][%d]=%d\n",j,k,num[j][k]);
		}
}
	
	
	return 0; 
}
