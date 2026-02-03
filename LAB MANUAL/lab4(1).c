#include<stdio.h>

float max(float ,float ,float );

int main()
{
	float num1,num2,num3,result;
	printf("Enter number 1 :");
	scanf("%f",&num1);
	
	printf("Enter number 2 :");
	scanf("%f",&num2);
	
	printf("Enter number 3 :");
	scanf("%f",&num3);
	
	
	result=max(num1,num2,num3);
	max(num1,num2,num3);
	printf("%f",result)
		
	
}

float max (float num1,float num2,float num3){
	if (num1>num2 && num1>num3){
		return num1;
	}
	else if (num2>num3 &&num2>num1){
		return num2;
	}
	else 
	return num3;
	
	
}
