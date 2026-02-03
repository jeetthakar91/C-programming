#include<stdio.h>

int main()
{
	char str[50],str2[50];
	int i=0;
	
	printf("Enter the string here :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		str2[i]=str[i];
	}
	printf(" copied string is : %s ",str2);	
}

