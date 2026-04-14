//Swap the values of two numbers using a pointer.

#include<stdio.h>

int main()
{
	int a=10,*p1;
	int b=20,*p2 ,temp;
	
	p1=&a;
	p2=&b;
	
	temp= *p1;
	*p1=*p2;
	*p2=temp;
	
	printf("after swapping :\n");
	printf("%d\n",*p1);
	printf("%d\n",*p2);
	
}
