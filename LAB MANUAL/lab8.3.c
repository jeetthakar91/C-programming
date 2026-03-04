/* Define a structure called Players which describes details like p_name, team, score, average. Write a program to read data for  
N players and arrange p_name in alphabetical order.*/

#include<stdio.h>
#include<string.h>
struct players{
	char p_name[50];
	char team[50];
	int score;
	float avg;
};

void main()
{
	 int n,i,temp,j;
	 
	 printf("Enter the N :");
	 scanf("%d",&n);
	 
	 struct players p[n];
	
	for(i=0;i<n;i++){
		printf("Enter %d name :",i+1);
		scanf("%s",p[i].p_name);
		
	printf("Enter %d team :");
		scanf("%s",p[i].team);
			
		printf("Enter %d score :");
		scanf("%d",&p[i].score);
		
		printf("Enter %d avg :");
		scanf("%f",&p[i].avg);	
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(p[i].p_name,p[j].p_name,p[j].name)>0){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("your data :");
	for(i=0;i<n;i++){
		printf("p_name : %d\n Team : %s\n score : %d\n avg:%f\n",p[i].p_name,p[i].team,p[i].score,p[i].avg);
	}
}
