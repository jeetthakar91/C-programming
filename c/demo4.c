//Store n elements in an array and print the elements using pointer.

#include<stdio.h>

int main()
{
	int n,i,a[100],*p1;
	p1=a;
	
	printf("Enter the N :");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++){
		scanf("%d",(p1+i));
	}
	
	printf("Entered elemets are :");
	for(i=0;i<n;i++){
		printf("%d",*(p1+i));
	}
}
