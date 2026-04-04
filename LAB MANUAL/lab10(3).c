
#include<stdio.h>

int main()
{
	int arr[50],*p1=arr;
	int i=0,n,even=0,odd=0;
	
	printf("Enter the n");
	scanf("%d",&n);
	
	printf("enter %d elements",n);
	for(i=0;i<n;i++){
		scanf("%d",(p1+i));
	}
	if (*p1+i%2==0){
		even++;
		}
		else 
		odd++;
		
		printf("even = %d and odd = %d",even,odd);
}
