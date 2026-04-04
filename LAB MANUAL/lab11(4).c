//Copy one string into another string using Pointers.

#include<stdio.h>

int main()
{
 char str1[50],str2[50],*ptr[50];
 int i;
 
 printf("Enter the sting here :");
 scanf("%s",str1);
	 
 for(i = 0; str1[i]!= '\0';i++) {
 	ptr[i] = &str1[i];
 }
 
 for(i=0;*ptr[i]!='\0';i++){
 	str2[i]=*ptr[i];
 }
 
 for(i=0;str2[i]!='\0';i++){
 	printf("%c",str2[i]);
 }
 return 0;
}
