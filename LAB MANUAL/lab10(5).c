//5. Sort array using pointers. (C)

#include<stdio.h>
void main()
{
	int a[50],*p[50],i,j,n,temp;
	
	printf("Enter Total element you want to enter \n");
	scanf("%d",&n);
	
	printf("Enter Elements = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*p[i]>*p[j])
			{
				temp=*p[i];
				*p[i]=*p[j];
				*p[j]=temp;
			}
		}
	}
	
	printf("Ascending araay = \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
}
