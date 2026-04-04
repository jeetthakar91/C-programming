//4. Demonstrate functions fseek() and rewind (). (B) 

#include<stdio.h>

void main()
{
	FILE *fptr;
	char ch;
	
	fptr=fopen("hello.txt","r");
	
	if(fptr==NULL)
	{
		printf("File Is Not Available\n");
	}
	else
	{
		printf("File Is Available\n");
	}
	
	printf("Fseek = \n");
	
	fseek(fptr,-3,2);
	
	fscanf(fptr,"%c",&ch);
	
	printf("%c \n",ch);
	
	printf("Rewind= \n");
	
	rewind(fptr);
	
	fscanf(fptr,"%c",&ch);
	
	printf("%c ",ch);
	
	fclose(fptr); 
	
}
