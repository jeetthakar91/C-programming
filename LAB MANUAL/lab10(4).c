//Print positive and negative numbers in array using pointers. 

#include<stdio.h>

int main()
{
	int i,n;
	int arr[50],*ptr[50];
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		ptr[i]=&arr[i];
	}
	
	for(i=0;i<n;i++){
		if(*ptr[i] > 0){
			printf(" positive = %d\n",*ptr[i]);
		}
	}
	
	for(i=0;i<n;i++){
		if(*ptr[i] < 0){
			printf(" neg = %d\n",*ptr[i]);
		}
	}
		
}
