//������ ������ ������
//p1�� ���� �迭 ���·� �Է¹ް� ����ϱ� 
//p2�� ���� ������ ���·� �Է� �ް� ����ϱ� 
//p1�� ���� realloc�ϰ� ������ ����� 

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main(){
	int *p1,*p2,i,j;
	p1=(int *)malloc(3*sizeof(int));
	p2=(int *)calloc(3,sizeof(int));
	for(i=0;i<3;i++){
		printf("%d��° p1��:",i);
		scanf("%d",&p1[i]); 
		}
		
	for(i=0;i<3;i++){
		printf("%d��°p1�� ��:%d\t",i,p1[i]);
	}
	
	printf("\n");
	
    for(i=0;i<3;i++){
		printf("%d��° p2��:",i);
		scanf("%d",(p2+i)); 
		}
		
	for(i=0;i<3;i++){
		printf("%d��°p2�� ��:%d\t",i,*(p2+i));
	}
	printf("\n\n");
	
	p1=(int *)realloc(p1,SIZE*sizeof(int));
		for(i=0;i<SIZE;i++){
		printf("%d��°p1�� ��:%d\t",i,p1[i]);
	}
	
	free(p1);
	free(p2);
	return 0;
} 
