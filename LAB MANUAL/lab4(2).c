
#include<stdio.h>

void swap();

void main()
{
	swap();
}

void swap()
{
	int a,b,temp;
	printf("Enter A and B :");
	scanf("%d %d",&a,&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("after swap value will be a=%d and b=%d",a,b);
}
