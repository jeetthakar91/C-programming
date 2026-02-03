//Find the power of any number using recursion. 

#include<stdio.h>

int power(int a,int b);

void main()
{
	int number,pow,result;
	printf("Enter the number");
	scanf("%d",&number);
	
	printf("Enter the power :");
	scanf("%d",&pow);
	
	result=  innt power(int a,int b);
	printf("Answer will be %d",result);
}
int power(int a,int b){

if(b==0)
return 1;

else 
return a*pow(a,b-1); 
	
	
}
