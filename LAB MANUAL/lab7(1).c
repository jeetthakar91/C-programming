//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include<stdio.h>

struct student{
	char name[10];
	float per;
	int age;
};

void main()
{
	struct  student s[10];
	int i;
	printf("Enter the name,percentage and age of student :\n");
	
	for(i=0;i<5;i++){
		scanf("%s\n",s[i].name);
		scanf("%f\n",&s[i].per);
		scanf("%d\n",&s[i].age);
	}
	
	printf("\n--- Entered details---\n");
	for(i=0;i<5;i++){
		printf("%s\n",s[i].name);
		printf("%f\n",s[i].per);
		printf("%d\n",s[i].age);
	}
}
