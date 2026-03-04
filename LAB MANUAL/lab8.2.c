/*Define a union called Players which describes details like p_name, team, score, average.
 Write a program to read data for 3 players and print that data. */
 
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
		
		printf("p_name : %s",p[i].p_name);
		
	printf("Enter %d team :");
		scanf("%s",p[i].team);
		
		printf("p_name : %s",p[i].team);
			
		printf("Enter %d score :");
		scanf("%d",&p[i].score);
		
		printf("p_name : %d",p[i].score);
		
		printf("Enter %d avg :");
		scanf("%f",&p[i].avg);
		
		printf("p_name : %f",p[i].avg);	
	}

}
