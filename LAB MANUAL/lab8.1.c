/*Define a structure called Players which describes details like p_name, team, score, average. 
Write a program to read data for  3 players and print that data*/

#include<stdio.h>

struct players{
	char p_name[50];
	char team[50];
	int score;
	float avg;
}p[3];

void main()
{
	 int i;
	
	for(i=0;i<3;i++){
		printf("Enter %d name :",i+1);
		scanf("%s",p[i].p_name);
		
	printf("Enter %d team :",i+1);
		scanf("%s",p[i].team);
			
		printf("Enter %d score :",i+1);
		scanf("%d",&p[i].score);
		
		printf("Enter %d avg :",i+1);
		scanf("%f",&p[i].avg);	
	}
	printf("your data :");
	for(i=0;i<3;i++){
		printf("p_name : %d\n Team : %s\n score : %d\n avg:%f\n",p[i].p_name,p[i].team,p[i].score,p[i].avg);
	}
}
