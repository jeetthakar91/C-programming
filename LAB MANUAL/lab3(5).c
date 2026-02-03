#include<stdio.h>

void prime();

void main()
{
	prime();
}
void prime()
{
	int n;
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("%d is prime",n);
		
		}else
			printf("%d is not prime",n);
		
	
}
