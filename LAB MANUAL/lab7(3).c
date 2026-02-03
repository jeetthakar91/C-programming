#include <stdio.h>
#include<string.h>
struct student {
	char name[50];
	int percentage;
	int age;
	
};

int main()
{
	struct student s[100];
	int i,j,n,max=0;
	
	printf("Enter the number of students :");
	scanf("%d",&n);
	
	printf("Enter the Name,Percentage and Age of %d students :",n);
	
	for(i=0;i<n;i++){
		scanf("%s",s[i].name);
		scanf("%d",&s[i].percentage);
		scanf("%d",&s[i].age);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(s[i].name,s[j].name) > 0){
				struct student temp = s[i];
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
		
}
for(i=0;i<n;i++){
		printf("%s\n",s[i].name);
		printf("%d\n",s[i].percentage);
		printf("%d\n",s[i].age);
	
}

}
