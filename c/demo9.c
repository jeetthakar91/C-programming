//Find the length of the string using Pointers

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],*p;
	int len=0,i=0;
	p=str;
	
	printf("Enter the  String here :");
	scanf("%s",str);
	
	for(i=0;*(p+i)!='\0';i++){
		len++;
	}
	
	printf("%d",len);
}
