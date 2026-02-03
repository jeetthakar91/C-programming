// Pass an array in a function to print the array elements. 

#include<stdio.h>

void arry();

void main()
{
	arry();
	
}
void arry(){
	
	int arr[10],i;
	
	for(i=0;i<5;i++){
		scanf("enter the numbers :",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
}
