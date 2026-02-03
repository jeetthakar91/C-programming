#include<stdio.h>

void swap(int*,int*);

int main()
{
	int a,b,main;
	
	printf("Enter the A :");
	scanf("%d",&a);
	
	printf("Enter the B :");
	scanf("%d",&b);
	
	
	swap(&a,&b);
}
void swap(int *a,int *b){
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;

	printf("after swaping the numbers values : a=%d and b=%d",*a,*b);
	
}
