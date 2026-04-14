#include<stdio.h>

int main ()
{
	int a[100],*p1,b[100],*p2,i=0;
	
	p1=a;
	p2=b;
	
	printf("Enter 5 elements :");
	for(i=0;i<5;i++){
		scanf("%d",(p1+i));
	}
	
	for(i=0;i<5;i++){
		*(p2+i) = *(p1+i);
	}
	
	printf("Copied arry is :");
	for(i=0;i<5;i++){
		printf("%d",*(p2+i));
	}
}
