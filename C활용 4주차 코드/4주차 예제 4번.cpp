/*4. ������ ���ǿ� ���� ����� �����Լ��� �����Ͽ� �ڵ带 �ϼ��ϰ�
����� ������Ѻ�����.
�� ������ ���Ͽ� ���ϱ⸦ ������ �� ����� ��ȯ���� �ʴ�  �Լ� add_ print 
 ����: i,j,sum*/
 
 #include <stdio.h>
 
 void add_print(int i, int j);
 
 int main(){
	int i,j;
	printf("���ϱ� ������ �� �ΰ��� ������ ���ʴ�� �Է��ϼ���:");
	scanf("%d%d",&i,&j);
 	add_print(i,j);
 	
 	return 0;
 	
 	
 }
 
  void add_print(int i, int j){
  	
  	printf("�� ���� ��:%d", i+j);
  }
