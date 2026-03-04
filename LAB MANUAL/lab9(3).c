//Calculate sum of two numbers using pointer. 

#include<stdio.h>

int main()
{
	int *p1,a;
	p1 = &a;
	
	int *p2,b;
	p2=&b;

	int c;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("Sum of these two = %d",c);
}
