// ������ �ڵ带 ����غ���, ����� �����ϼ���.
#include <stdio.h>

int main(){
	int a[3], i;
	int *ip;
	ip=a;
	for(i=0;i<3;i++){
		printf("a[%d]�� ���� �Է��ϼ���:", i);
		scanf("%d",&ip[i]);
	}

	for(i=0;i<3;i++){
		printf("a[%d]=%d\n",i,a[i]);
		printf("a[%d]=%d\n",i,*(a+i));
		printf("a[%d]=%d\n",i,ip[i]);
		printf("a[%d]=%d\n\n",i,*(ip+i));
		
	}
	return 0;
} 
