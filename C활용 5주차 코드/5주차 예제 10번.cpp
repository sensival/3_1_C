/* 다음과같은 조건으로 구구단이 출력되도록 코드를 완성해 보새요.
정수 n을 입력, 2-단까지 결과를 출력함.*/
 
#include <stdio.h>

int main(){
	int gugu[9][9];
	int i, j, n;
	
	printf("몇단까지 출력할까여?");
	scanf("%d",&n);
	
	for(i=0;i+1<n;i++){
		printf("%d단\n",i+2);
		for(j=0;j<9;j++){
	
		gugu[i][j]=(i+2)*(j+1);
		printf("%d * %d = %d \t", i+2, j+1, gugu[i][j] );
	}
	 printf("\n");
	
}
	return 0;
}
