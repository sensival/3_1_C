// ����ü �迭�� �ʱⰪ�� ����ϴ� �ڵ�
#include<stdio.h>
	struct student{
		int num;
		float kor;
		float eng;
		float c;
	};
int main(){
	int i;
	struct student a[3]={
	{1,100,90,80},
	{2,90,90,80},
	{3,100,100,100}
	}; 
	
	for(i=0;i<3;i++){
		printf("%d��: %4.1f %4.1f% 4.1f\n", a[i].num, a[i].kor, a[i].eng, a[i].c);
	}
	return 0;
}
