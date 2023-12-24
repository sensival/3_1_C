/* 학생의 성적을 입력 받고 합계*/ 
#include<stdio.h>
	struct student{
		int num;
		float kor;
		float eng;
		float c;
	};
	
int main(){
	struct student a1,a2,a3;
	printf("1번의 성적(국어, 영어, c활용)입력: \n");
	scanf("%f",&a1.kor);
	scanf("%f",&a1.eng);
	scanf("%f",&a1.c);
	printf("2번의 성적(국어, 영어, c활용)입력: \n");
	scanf("%f",&a2.kor);
	scanf("%f",&a2.eng);
	scanf("%f",&a2.c);
	printf("3번의 성적(국어, 영어, c활용)입력: \n");
	scanf("%f",&a3.kor);
	scanf("%f",&a3.eng);
	scanf("%f",&a3.c);
	
	printf("1번의 성적의합: %f\n",(a1.kor+a1.eng+a1.c));
	printf("2번의 성적의합: %f\n",(a2.kor+a2.eng+a2.c));
	printf("3번의 성적의합: %f\n",(a3.kor+a3.eng+a3.c));
	return 0;
}
