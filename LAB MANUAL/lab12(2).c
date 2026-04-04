//Calculate the sum of n numbers entered by the user using malloc (). (A) 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,*ptr,sum=0;
	
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	ptr= (int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
		sum = sum + *(ptr+i);
	}
	
	printf("sum = %d",sum);
}
