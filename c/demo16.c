//Count chars, spaces, tabs and new lines in a file.

#include<stdio.h>

int main()
{
	FILE *fptr;
	int cc=0,sc=0,tc=0,nc=0;
	char ch;
	
	fptr=fopen("hello.txt","r");
	
	if(fptr == NULL){
		printf("File not avilable");
	}
	
	while((ch=fgetc(fptr))!= EOF){
		cc++;
		
		if(ch=='  ')
		sc++;
		
		if(ch=='\t')
		tc++;
		
		if(ch=='\n')
		nc++;
	}
	fclose(fptr);
	
	printf("Total Characters = %d\n", cc);
	printf("Total Spaces = %d\n", sc);
	printf("Total Tabs = %d\n", tc);
	printf("Total New Lines = %d\n", nc);
}
