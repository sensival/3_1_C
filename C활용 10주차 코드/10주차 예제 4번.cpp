//다음을 실행해 보세요
//p1의 값을 배열 형태로 입력받고 출력하기 
//p2의 값을 포인터 형태로 입력 받고 출력하기 
//p1의 값을 realloc하고 값들을 출력하 

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main(){
	int *p1,*p2,i,j;
	p1=(int *)malloc(3*sizeof(int));
	p2=(int *)calloc(3,sizeof(int));
	for(i=0;i<3;i++){
		printf("%d번째 p1값:",i);
		scanf("%d",&p1[i]); 
		}
		
	for(i=0;i<3;i++){
		printf("%d번째p1의 값:%d\t",i,p1[i]);
	}
	
	printf("\n");
	
    for(i=0;i<3;i++){
		printf("%d번째 p2값:",i);
		scanf("%d",(p2+i)); 
		}
		
	for(i=0;i<3;i++){
		printf("%d번째p2의 값:%d\t",i,*(p2+i));
	}
	printf("\n\n");
	
	p1=(int *)realloc(p1,SIZE*sizeof(int));
		for(i=0;i<SIZE;i++){
		printf("%d번째p1의 값:%d\t",i,p1[i]);
	}
	
	free(p1);
	free(p2);
	return 0;
} 
