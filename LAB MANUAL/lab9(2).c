//Demonstrate int, float, double and char pointer

#include<stdio.h>

int main()
{
	int *p1,a;
	p1 = &a;
	
	float *p2,b;
	p2=&b;
	
	char *p3,c;
	p3=&c;
	
	double *p4,d;
	p4=&d;
	
	printf("Enter the a :");
	scanf("%d",&a);
	
	printf("Enter the b :");
	scanf("%f",&b);
	
	printf("Enter the c :");
	scanf(" %c",&c);
	
	printf("Enter the d :");
	scanf("%lf",&d);
	
	printf("value of a = %d and address = %u\n",*p1,p1);
	printf("value of b = %f and address = %u\n",*p2,p2);
	printf("value of c = %c and address = %u\n",*p3,p3);
	printf("value of d = %lf and address = %u\n",*p4,p4);
}

