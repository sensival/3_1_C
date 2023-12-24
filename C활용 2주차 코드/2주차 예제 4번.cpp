//4. 실수(double)형 변수 height와 weight 입력 후 체질량계수(BMI)의 측정값을 출력해 보세요.//
 /*변수= height, weight, result
  측정식='result=weight/(height*height)'
  ' 20미만 저체중, 20-24 정상, 25-29 과체중, 30이상 비만*/
  
 #include <stdio.h>

int main()
{ 
printf("윤태환님, 키와 몸무게를 차례로 입력하세요.\n");
double height,weight,result;
	scanf("%lf%lf",&height,&weight);
	height=height/100;
	result=weight/(height*height);
	
	printf("%lf", result);
	if(result<20){
	printf("저체중\n");
	}
	else if(20<=result && result<=24){
	printf("정상\n");	
	}
	else if(24<result && result<=29){
	printf("과체중\n");	
	}
	else{
	printf("비만\n");		
	}
	 
	


return 0;
}
 
