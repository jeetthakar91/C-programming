// swap 2 arrys using pointers

#include<stdio.h>

int main()
{
	int a[100],*p1,b[100],*p2,temp,i=0;
	p1=a;
	p2=b;
	
	printf("Enter the 1st arry :");
	for(i=0;i<5;i++){
		scanf("%d",(p1+i));
	}
	
	printf("Enter the 2nd arry :");
	for(i=0;i<5;i++){
		scanf("%d",(p2+i));
	}
	
	for(i=0;i<5;i++){
		temp=*(p1+i);
	*(p1+i) =*(p2+i);
	*(p2+i) = temp;
	}
	
	printf("After swapping values of 1 will be :");
	for(i=0;i<5;i++){
		printf("%d\n",*(p1+i));
	}
	
	printf("After swapping values of 2 will be :");
	for(i=0;i<5;i++){
		printf("%d\n",*(p2+i));
	}
	
}
