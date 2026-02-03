#include<stdio.h>

int main()
{
	char str[100] ;
	int len=0,i=0;
	
	printf("Enter the string here :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("The len of string is %d",len);

}
