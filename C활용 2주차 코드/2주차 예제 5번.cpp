/*5.1-12������ ���ڸ� ���������� month�� �Է� �ް�,
3,4,5�� ���Դϴ�. 6,7,8�� �����Դϴ�.
9,10,11�� �����Դϴ�. 12,1,2 �ܿ��Դϴ�.
���� 1~12 ������ ���� �ƴѰ�� "�߸� �Է��ϼ̽��ϴ�"�� ���(switch-case)*/
#include <stdio.h>

int main()
{ 

int month;

printf("���� �Է��ϼ���:");
scanf("%d",&month);

 switch(month){
 		case 3:
 		case 4:
 		case 5:
		printf("���Դϴ�.\n");
		break;
		  
		case 6:
 		case 7:
 		case 8:
 		printf("�����Դϴ�.\n");
 		break;
 		
 		case 9:
 		case 10:
 		case 11:
 		printf("�����Դϴ�.\n");
 		break;
 		
		case 12:
 		case 1:
 		case 2:
 		printf("�ܿ��Դϴ�.\n");
 		break;
 		
 		default:
 		printf("�߸��Է��ϼ̽��ϴ�.\n");
 		
 		
 }
 

return 0;
}
 
