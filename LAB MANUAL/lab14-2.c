//2. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc() (A)

#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fptr;
	char str[]="Hey How Are You", str2;
	char ch;
	int i;
	
	fptr=fopen("hello2.txt","w");
	
	if(fptr==NULL)
	{
		printf("File Not Available");
		return;
	}
    
  
  	printf("\n fputc == \n");
  	
		for(i=0;str[i]!='\0';i++)
		{
			fputc(str[i],fptr);
		}
		
		printf("Data Written Successfully \n");

	
		fclose(fptr);
	

	
	printf("\n fgetc == \n");
	
	fptr=fopen("hello2.txt","r");
	
	while(1)
	{
		ch=getc(fptr);
		
		if(ch==EOF)
		{
			break;
		}
		
		printf("%c ",ch);
	}
	

	fclose(fptr);
	
	
}
