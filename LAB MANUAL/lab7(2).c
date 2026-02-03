/*Create structure student with name, percentage and age. Read data of N students using array of structure.
 Print details of student with maximum percentage */
 
#include <stdio.h>

struct student {
	char name[50];
	int percentage;
	int age;
	
};

int main()
{
	struct student s[100];
	int i,n,max=0;
	
	printf("Enter the number of students :");
	scanf("%d",&n);
	
	printf("Enter the Name,Percentage and Age of %d students :",n);
	
	for(i=0;i<n;i++){
		scanf("%s",s[i].name);
		scanf("%d",&s[i].percentage);
		scanf("%d",&s[i].age);
	}
	
	for(i=0;i<n;i++){
		if(s[i].percentage> s[max].percentage)
		max=i;
	}
	
	
	printf("maximum percentage student :\n");
	printf(" Name :%s\n",s[max].name);
	printf(" percentage :%d\n",s[max].percentage);
	printf(" Age : %d\n",s[max].age);
}

 
 
