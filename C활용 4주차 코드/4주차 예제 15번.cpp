/* n이 소수인지 아닌지 판단하는 프로그램*/

#include <stdio.h>

int prime(int);

int main(){
	int n, tmp;
	while(1){

	printf("n=");
	scanf("%d",&n);
	tmp=prime(n);
	if(n==-1)
	break;
	else if (tmp==1)
	printf("%d=prime number\n",n);
	else
	printf("%d=not prime number\n",n);

}
	return 0;
}

int prime(int n){
	int i,j =0;
	for(i=1; i<=n; i++){
		if (n % i == 0)
		j++;
	}
	if (j==2)
	return 1;
	else
	return 0;
	
	
}
	
