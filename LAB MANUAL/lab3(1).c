#include<stdio.h>

void add();

int main()
{
	add();
}

void add()
{
	int num1,num2,addition;
	printf("Enter the number 1 :");
	scanf("%d",&num1);
	
	printf("Enter the number 2 :");
	scanf("%d",&num2);
	
	addition=num1+num2;
	
	printf("addtion of num1 and num2 is : %d",addition);
}
