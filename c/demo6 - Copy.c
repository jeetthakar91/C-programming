//Write a program to find maximum of two numbers using function.

#include<stdio.h>

void max(num1,num2);

void main()
{
	int num1,num2;
	printf("Enter the number 1 :");
	scanf("%d",&num1);
	
	printf("Enter the number 2 :");
	scanf("%d",&num2);
	
	max(num1,num2);
}
void max(num1,num2)
{
	
	if(num1>num2){
		printf("%d is max number",num1);
	}
	else {
		printf("%d is max number",num2);
	}
}
