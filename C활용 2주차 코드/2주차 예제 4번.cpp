//4. �Ǽ�(double)�� ���� height�� weight �Է� �� ü�������(BMI)�� �������� ����� ������.//
 /*����= height, weight, result
  ������='result=weight/(height*height)'
  ' 20�̸� ��ü��, 20-24 ����, 25-29 ��ü��, 30�̻� ��*/
  
 #include <stdio.h>

int main()
{ 
printf("����ȯ��, Ű�� �����Ը� ���ʷ� �Է��ϼ���.\n");
double height,weight,result;
	scanf("%lf%lf",&height,&weight);
	height=height/100;
	result=weight/(height*height);
	
	printf("%lf", result);
	if(result<20){
	printf("��ü��\n");
	}
	else if(20<=result && result<=24){
	printf("����\n");	
	}
	else if(24<result && result<=29){
	printf("��ü��\n");	
	}
	else{
	printf("��\n");		
	}
	 
	


return 0;
}
 
