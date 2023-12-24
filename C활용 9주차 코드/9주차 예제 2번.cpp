#include<stdio.h>
struct student{
	int num;
	char dept[20];
	char name[20];
	int grade;
};

int main(){
	struct student a1;
	scanf("%d",&a1.num);
	scanf("%s",&a1.dept);
	scanf("%s",&a1.name);
	scanf("%d",&a1.grade);
	printf("num=%d\ndept=%s\nname=%s\ngrade=%d\n",a1.num,a1.dept,a1.name,a1.grade);
	return 0;
}
