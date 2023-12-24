/*5.1-12사이의 숫자를 정수형변수 month를 입력 받고,
3,4,5는 봄입니다. 6,7,8은 여름입니다.
9,10,11은 가을입니다. 12,1,2 겨울입니다.
만일 1~12 사이의 수가 아닌경우 "잘못 입력하셨습니다"를 출력(switch-case)*/
#include <stdio.h>

int main()
{ 

int month;

printf("월을 입력하세요:");
scanf("%d",&month);

 switch(month){
 		case 3:
 		case 4:
 		case 5:
		printf("봄입니다.\n");
		break;
		  
		case 6:
 		case 7:
 		case 8:
 		printf("여름입니다.\n");
 		break;
 		
 		case 9:
 		case 10:
 		case 11:
 		printf("가을입니다.\n");
 		break;
 		
		case 12:
 		case 1:
 		case 2:
 		printf("겨울입니다.\n");
 		break;
 		
 		default:
 		printf("잘못입력하셨습니다.\n");
 		
 		
 }
 

return 0;
}
 
