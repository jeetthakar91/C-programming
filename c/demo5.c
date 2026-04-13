//Find even and odd numbers in array using pointer

#include<stdio.h>

int main()
{
	int a[100],n,*p1,i;
	p1=a;
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",(p1+i));
	}
	
	printf("Even numbers are:");
	for(i=0;i<n;i++){
		if(*(p1+i)%2==0){
			printf("%d\n",*(p1+i));
		}
	}
	
	printf("Odd numbers are:");
	for(i=0;i<n;i++){
		if(*(p1+i)%2!=0){
			printf("%d\n",*(p1+i));
		}
	}
}
