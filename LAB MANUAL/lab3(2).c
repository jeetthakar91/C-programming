//2. find the maximum number between two numbers using a function. (A)

#include<stdio.h>

void max();

int main()
{
	  max();
	 
}
void max()
{
	int num1,num2;
	
	printf("Enter the number 1 :");
	scanf("%d",&num1);
	
	printf("Enter the number 2 :");
	scanf("%d",&num2);
	
	if(num1>num2)
	printf("%d is max number",num1);
	
	else
	printf("%d is max",num2);
	
}
