/* ���������� �������� �������� ��µǵ��� �ڵ带 �ϼ��� ������.
���� n�� �Է�, 2-�ܱ��� ����� �����.*/
 
#include <stdio.h>

int main(){
	int gugu[9][9];
	int i, j, n;
	
	printf("��ܱ��� ����ұ?");
	scanf("%d",&n);
	
	for(i=0;i+1<n;i++){
		printf("%d��\n",i+2);
		for(j=0;j<9;j++){
	
		gugu[i][j]=(i+2)*(j+1);
		printf("%d * %d = %d \t", i+2, j+1, gugu[i][j] );
	}
	 printf("\n");
	
}
	return 0;
}
