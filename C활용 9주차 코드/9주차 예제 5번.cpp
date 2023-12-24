#include<stdio.h>
	struct student{
		int num;
		float kor;
		float eng;
		float c;
	};
int main(){
	int i;
	struct student a[3];
	float sum[3]={0};
	for(i=0;i<3;i++){
		printf("%d번의 성적(국어, 영어, c활용)입력: \n",i+1);
		scanf("%f",&a[i].kor);
		scanf("%f",&a[i].eng);
		scanf("%f",&a[i].c);
		sum[i]=sum[i]+a[i].kor+a[i].eng+a[i].c;
	}
	
	for(i=0;i<3;i++){
		printf("%d번: %f %f %f , sum=%f\n",i+1,a[i].kor,a[i].eng,a[i].c,sum[i]);
	}
	return 0;
}
