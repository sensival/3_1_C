/* �л��� ������ �Է� �ް� �հ�*/ 
#include<stdio.h>
	struct student{
		int num;
		float kor;
		float eng;
		float c;
	};
	
int main(){
	struct student a1,a2,a3;
	printf("1���� ����(����, ����, cȰ��)�Է�: \n");
	scanf("%f",&a1.kor);
	scanf("%f",&a1.eng);
	scanf("%f",&a1.c);
	printf("2���� ����(����, ����, cȰ��)�Է�: \n");
	scanf("%f",&a2.kor);
	scanf("%f",&a2.eng);
	scanf("%f",&a2.c);
	printf("3���� ����(����, ����, cȰ��)�Է�: \n");
	scanf("%f",&a3.kor);
	scanf("%f",&a3.eng);
	scanf("%f",&a3.c);
	
	printf("1���� ��������: %f\n",(a1.kor+a1.eng+a1.c));
	printf("2���� ��������: %f\n",(a2.kor+a2.eng+a2.c));
	printf("3���� ��������: %f\n",(a3.kor+a3.eng+a3.c));
	return 0;
}
