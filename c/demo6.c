//Print positive and negative numbers in array using pointers


#include<stdio.h>

int main()
{
	int a[100],*p1,i,n;
	p1=a;
	
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",(p1+i));
	}
	
	for(i=0;i<n;i++){
		if(*(p1+i) > 0 ){
			printf(" positive = %d\n",*(p1+i));
		}
		
	}
	for(i=0;i<n;i++){
		if(*(p1+i) < 0 ){
			printf(" negative = %d\n",*(p1+i));
		}
		
	}
	
	
}
