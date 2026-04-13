//Copy one string into another string using Pointers.

#include<stdio.h>
#include<string.h>

int main() {
	char str[100],str2[100];
	char *p1,*p2;
	
	p1=str;
	p2=str2;
	
	printf("Enter the string here :");
	scanf("%s",str);
	
	while(*p1 != '\0'){
		*p2=*p1;
		*p1++;
		*p2++;
	}
	
	printf(" copied string is %s",str2);
}
