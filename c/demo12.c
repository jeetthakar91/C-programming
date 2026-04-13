// Calculate the sum of n numbers using calloc()

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,*ptr,sum=0;

	printf("Enter N :");
	scanf("%d",&n);

	ptr = (int *)calloc(n,sizeof(int));

	if(ptr == NULL){
		printf("Memory allocation failed");
		return 0;
	}

	printf("Enter elements :");

	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}

	for(i=0;i<n;i++){
		sum = sum + *(ptr+i);
	}

	printf("Sum = %d",sum);

	free(ptr);

	return 0;
}
