// Demonstration of fprintf(), fscanf(), fputc(), fgetc()

#include<stdio.h>

int main()
{
	FILE *fptr;
	char ch, str[100];

	// fputc example

	fptr = fopen("hello.txt","w");

	fputc('A',fptr);
	fputc('B',fptr);
	fputc('C',fptr);

	fclose(fptr);


	// fgetc example

	fptr = fopen("hello.txt","r");

	while((ch = fgetc(fptr)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fptr);


	// fprintf example

	fptr = fopen("hello.txt","a");

	fprintf(fptr,"hey there! i'm jeet thakar, a IT professional");

	fclose(fptr);


	// fscanf example

	fptr = fopen("hello.txt","r");

	fscanf(fptr,"%s",str);

	printf("\nData from file: %s",str);

	fclose(fptr);

	return 0;
}
