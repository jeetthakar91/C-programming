//Find the length of the string using Pointers.

#include<stdio.h>

int main()
{
	char str[50],*ptr[50];
	int i=0,len=0;
	
	printf("Enter the dtring here :");
	scanf("%s",&str[i]);
	str[i]=&ptr[i];
	
	for(i=0;str[i]!='\0';i++){
		len++;
	} 
	printf("lenght = %d",len);
}
