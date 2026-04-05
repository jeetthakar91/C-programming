//Copy one string into another string using Pointers.

#include<stdio.h>

int main()
{
 char str1[50],str2[50],*ptr[50];
 int i;
 
 printf("Enter the string here :");
 scanf("%s",str1);
	 
 for(i = 0; str1[i]!= '\0';i++) {
 	ptr[i] = &str1[i];
 }
 
 for(i=0;*ptr[i]!='\0';i++){
 	str2[i]=*ptr[i];
 }
 
 str2[i]='\0';
 
 printf("Copied string: %s",str2);

 return 0;
}
