#include<stdio.h>

int main(){
	FILE *f1;
	int i, num;
	char buffer_fn[100], name[10];
	printf("������ �̸�:");
	scanf("%s",buffer_fn);
	f1=fopen(buffer_fn,"w");
	if(f1==NULL)
	printf("error");
	while(1){
		printf("�ڽ��� �й� �̸��� �Է��ϼ���. �й���0�� �Է��ϸ� ����˴ϴ�.\n");
		scanf("%d", &num);
		if(num==0)
		break;
		scanf("%s",name);
		fprintf(f1,"%d \t %s \n",num,name);
	}
	fclose(f1);
	return 0; 
}

