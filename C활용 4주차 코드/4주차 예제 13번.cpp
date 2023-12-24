/*두값을 입력받아 큰값을 출력하는 프로그램 입니다. 결과가 나오도록 코드를 완성해 보세요.*/

#include <stdio.h>
int big(int a, int b);

int main(){
	int i,j;
	printf("두 값을 입력하세요.\n");
	scanf("%d%d",&i,&j);
	big(i,j);
	return 0;
	
} 

int big(int a, int b){
	if (a>b)
	printf("두 값 중 큰 값:%d\n",a);
	else if (a<b)
	printf("두 값 중 큰 값:%d\n",b);
	else
	printf("에러입니다.\n",b);
}

/*int big(int a, int, b){
int max;
max=(a>b)? a : b;
return max; */




