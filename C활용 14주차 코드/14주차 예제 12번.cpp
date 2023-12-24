#include <stdio.h>
#define SIZE 3
struct student{
	int number;
	char name[20];
	double gpa;
};

int main(){
	struct student table[SIZE]={
		{1,"kim",3.99},
		{2,"Min",2.68},
		{3,"Lee",4.01}
	};
	struct student s;
	FILE *fp=NULL;
	int i;
	if((fp=fopen("student.dat","wb"))==NULL){
		fprintf(stderr,"error\n");
		return -1;
	}
	fwrite(table, sizeof(struct student),SIZE,fp);
	fclose(fp);
	
	if((fp=fopen("student.dat","rb"))==NULL){
		fprintf(stderr,"error\n");
		return -1;
	}
	for(i=0;i<SIZE;i++){
		fread(&s,sizeof(struct student),1,fp);//알아서 한줄씩 읽는가?ㄷㄷㄷㄷㄷ 
		printf("학번=%d, 이름=%s, 평점=%f\n",s.number,s.name,s.gpa);
	}
	fclose(fp);
	return 0;
}
