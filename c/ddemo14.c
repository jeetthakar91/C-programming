//Demonstrate functions fseek() and rewind ().

// Demonstration of fseek() and rewind()

#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;

	fp = fopen("test.txt", "r");

	if(fp == NULL)
	{
		printf("File not found");
		return 0;
	}

	// Read first character
	ch = fgetc(fp);
	printf("First character: %c\n", ch);

	// Move pointer 4 positions from beginning
	fseek(fp, 4, SEEK_SET);

	ch = fgetc(fp);
	printf("Character after fseek(): %c\n", ch);

	// Move pointer back to beginning
	rewind(fp);

	ch = fgetc(fp);
	printf("Character after rewind(): %c\n", ch);

	fclose(fp);

	return 0;
}
