//Allocate and de-allocate memory for int, char and float variables at run time.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr1;
	float *ptr2;
	char *ptr3;
	
	ptr1= (int *)malloc(sizeof(int));
	ptr2= (float *)malloc(sizeof(float));
	ptr3= (char *)malloc(sizeof(char));
	
	printf("Entered element\n");
	scanf("%d",&ptr1);
	
	printf("Entered element \n");
	scanf(" %f",&ptr2);
	
	printf("Entered element \n");
	scanf(" %c",&ptr3);
	
	printf("Entered element is %d\n",ptr1);
	printf("Entered element is %f\n",ptr2);
	printf("Entered element is %c\n",ptr3);
	
	free(ptr1);
	free(ptr2);
	free(ptr3);
	
}


