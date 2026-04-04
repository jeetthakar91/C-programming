//Swap the values of two numbers using a pointer.

#include<stdio.h>

int main()
{
	int *p1,a=10;
	p1=&a;
	
	int *p2,b=20;
	p2=&b;
	
	int temp;

	temp=*p1;
	*p1=*p2;
	*p2=temp;
	 
	printf("a=%d and b=%d",*p1,*p2);
}
