//Create a structure book with book title, author, publication, and price. Read the data of 3 books and display. (A) 
#include<stdio.h>

struct book{
	char title[10];
	char author[10];
	char publication[10];
	float price;
};
int main(){

struct book b[3];
int i;

for(i=0;i<3;i++){
	
	printf("---Enter the details of book---\n",i+1);
	printf("Enter the title of the book :");
	scanf("%s",b[i].title);
	
	printf("\nEnter the name of author :");
	scanf("%s",b[i].author);
	
	printf("\nEnter the name of publication :");
	scanf("%s",b[i].publication);
	
	printf("\nEnter the price :");
	scanf("%f",&b[i].price);
}
for(i=0;i<3;i++){

printf("\nEntered details are as below\n",i+1);
printf("\nbook title : %s",b[i].title);
printf("\nbook author : %s",b[i].author);
printf("\nbook publication : %s",b[i].publication);
printf("\nbook price : %f",b[i].price);
}

}

