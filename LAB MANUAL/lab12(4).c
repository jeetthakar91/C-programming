#include<stdio.h>

struct student {
	int id;
	float mark;
};

int main()
{
	struct student *p;
	
p= (struct student *) malloc(sizeof(struct student));

if(p==NULL){
	printf("failed");
}	
p -> id=10;
p -> mark = 57.17;

printf("ID is %d\n",p->id);
printf("mark is %f\n",p->mark);
}
