//Store n elements in an array and print the elements using pointer

#include<stdio.h>

int main()
{
	int arr[50],*p1=arr;
	int i=0,n;
	
	printf("Enter the n");
	scanf("%d",&n);
	
	printf("enter %d elements",n);
	for(i=0;i<n;i++){
		scanf("%d",(p1+i));
	}
	printf("Entered elements are ");
	for(i=0;i<n;i++){
		printf("%d",(*p1+i));
	}
}
