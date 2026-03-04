//Print value and address of a variable. 

#include<stdio.h>

int main()
{
	int *p,n;
	p = &n;
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	printf("Address of %d = %u and value = %d",n,p,*p);
}

