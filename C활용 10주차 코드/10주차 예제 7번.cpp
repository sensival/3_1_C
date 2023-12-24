//define을 이용하여 x,y 중 작은값 리턴 


# include<stdio.h>
# define MAX(x,y) (x>y?x:y) 
int main(){
    int i=10,j=19;
    printf("%d", MAX(i,j));
	return 0;
} 
