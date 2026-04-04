//3. Count chars, spaces, tabs and new lines in a file. (A)



#include<stdio.h>
void main()
{
	FILE *fptr;
	int countchar=0, countspace=0, counttab=0, countline=0;
	char ch;
		
	fptr=fopen("hello.txt","r");

	while((ch=fgetc(fptr))!=EOF) 
	{
		countchar++;
		
	if(ch==' ')  
	{
		countspace++;
		}	
	if(ch=='\n')  
	{
		countline++;
		}
	if(ch=='\t') 
	{
		counttab++;
		
		}
		
}
	
	printf("Char = %d\n" ,countchar);
	printf("Space = %d\n" ,countspace);
	printf("Line = %d\n" ,countline);
	printf("Tab = %d\n" ,counttab);
	
	fclose(fptr);
	
}
