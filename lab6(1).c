#include<stdio.h>

void swap(int a,int b);

void main()
{
	int a,b;
	printf("Enter the a :");
	scanf("%d",&a);
	
	printf("Enter the b :");
	scanf("%d",&b);
	
	printf("Before swaping a=%d and b=%d\n",a,b);
	
	swap(a, b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf(" after swaping a=%d and b=%d\n",a,b);
}
