#include<stdio.h>

void interest();

int main()
{
	interest();
}

void interest()
{
	int p,r,t,si;
	
	printf("Enter the P :");
	scanf("%d",&p);
	
	printf("Enter the R :");
	scanf("%d",&r);
	
	printf("Enter the T :");
	scanf("%d",&t);
	
	si=(p*r*t)/100;
	
	printf("Simple interest = %d",si);
}
