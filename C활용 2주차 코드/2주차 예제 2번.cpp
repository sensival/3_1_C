/*2. ������ ���� num�� �Է°��� ���Ͽ� num�� �����ڸ��� ���
�� 100���� ū��� error�Դϴ�.*/
#include <stdio.h>

int main()
{
	int num;
	printf("���ڸ� �Է��ϼ���(100����):");
	scanf("%d",&num);
	if(num<=100){
		num=num%10;
		printf("%d", num);
	
	} 
	else if(num>100){
		printf("�����Դϴ�");
	}
	
	return 0;
 } 
