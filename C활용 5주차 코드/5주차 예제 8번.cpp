/* 8. 6¹ø ¹è¿­ÀÇ ÃÑÁ¡ÀÇ Æò±Õ, Æò±ÕÀÇ Æò±Õ ±¸ÇÏ±â*/


#include <stdio.h>

int main(){ 
	int i, j, sum1=0, sum2=0;
	int score2[3][2]={{200,100},{180,90},{150,75}};
	for(i=0;i<3;i++){
	sum1=sum1+score2[i][0];
	sum2=sum2+score2[i][1];
	}
	printf("ÃÑÁ¡ÀÇ Æò±ÕÀº%f\n", sum1/3.0);
	printf("Æò±ÕÀÇ Æò±ÕÀº%f\n", sum2/3.0);
	return 0; 
}

