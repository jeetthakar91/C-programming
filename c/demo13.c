//Copy one file to another file.

// Copy one file into another file

#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");

    if(fp1 == NULL)
    {
        printf("Source file cannot be opened");
        return 0;
    }

    fp2 = fopen("destination.txt", "w");

    if(fp2 == NULL)
    {
        printf("Destination file cannot be created");
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
