/*������ �ڵ带 ������ ������*/

#include<stdio.h>
void iChange(int);
 
int main(){
	int i=1;
	printf("ù��° i=%d\n", i);
	iChange(i);// i++�ص� �Լ� ������ �����, ++i�� �������� 
	printf("�ι�° i=%d\n", i);
	return 0;
}


void iChange(int i){
	++i;
}
