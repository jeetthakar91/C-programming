/*Define a structure called Players which describes details like p_name, team, score and average. Write a program to read data 
for N players using array of structure. Calculate the highest score and display the details of the top 3 players based on score. 
Also arrange all players in alphabetical order of p_name and print the sorted list.*/

#include<stdio.h>
struct players {
	int p_name[50];
	char team[30];
	int score;
	float avg;
};
void main()
{
	int n,i,j;
	printf("enter n\n");
	scanf("%d" ,&n);
	
	struct players p[n],temp;
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter  P_name\n");
		scanf("%d" ,&p[i].p_name);
		printf("Enter team\n");
		scanf("%s" ,p[i].team);
		
		printf("Enter score\n");
		scanf("%s" ,p[i].score);
		
		printf("Enter team\n");
		scanf("%s" ,p[i].avg);
		
		printf("enter three marks\n");
		s[i].total=0;
		s[i].pr=0;
	 	
		
		for(j=0;j<3;j++)
		{
			printf("\nenter subject %d: " ,j+1);
			scanf("%d" ,&s[i].mark[j]);
			
			s[i].total=s[i].total+s[i].mark[j];
		}
		s[i].pr=s[i].total/3;
		
		printf("Total_Mark: %d\n" ,s[i].total);
		printf("Parcantage: %f\n" ,s[i].pr);
	}
	
	printf("-------------------\n");
	printf("Top 3 Studentss_____\n");
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].total<s[j].total)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}	
	}
	for(i=0;i<3;i++)
	{
		printf("\nRoll_Number: %d\n" ,s[i].rn);
		printf("Name: %s\n" ,s[i].name);

		for(j=0;j<3;j++)
		{
			printf("%d mark: %d\n" ,j+1,s[i].mark[j]);
		}
		printf("Total_Mark: %d\n" ,s[i].total);
		printf("Parcantage: %f\n" ,s[i].pr);
		printf("--------------------\n");
	}
}
