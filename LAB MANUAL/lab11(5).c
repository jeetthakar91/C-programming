//Find Maximum Element in a 2-D Array Using Pointers

#include<stdio.h>

int main()
{
	int a[3][2],*p[3][3],i,j,max;
	
	printf("Enter the elements of matrix :");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			p[i][j]=&a[i][j];
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(*p[i][j] > max)
			{
				max = *p[i][j];
			}
		}
	}
	printf(" largest number is : %d",max);
}
