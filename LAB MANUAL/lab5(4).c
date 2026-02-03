#include<stdio.h>

int x[5],y[5],i,temp;

void swap(int x[],int y[]);

void main()
{
	for(i=0;i<5;i++)
	{
		scanf("%d" ,&x[i]);
	}
	for(i=0;i<5;i++)
	{
		scanf("%d" ,&y[i]);
	}
	
	swap(x,y);
	
	for(i=0;i<5;i++)
	{
		printf("%d \n" ,x[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d" ,y[i]);
	}
}

void swap(int x[],int y[]){
	for(i=0;i<5;i++)
	{
		temp=x[i];
		x[i]=y[i];
		y[i]=temp;
	}
}
