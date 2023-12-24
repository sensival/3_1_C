#include<stdio.h>
struct student{
	int num;
	char dept[20];
	char name[20];
	int grade;
};

int main(){
	struct student a1={1,"sw","lee",2};
	printf("num=%d\ndept=%s\nname=%s\ngrade=%d\n",a1.num,a1.dept,a1.name,a1.grade);
	return 0;
}
