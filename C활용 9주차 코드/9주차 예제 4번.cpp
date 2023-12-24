// 구조체 배열의 초기값을 출력하는 코드
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
		printf("%d번: %4.1f %4.1f% 4.1f\n", a[i].num, a[i].kor, a[i].eng, a[i].c);
	}
	return 0;
}
