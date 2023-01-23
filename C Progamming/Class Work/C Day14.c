#include<stdio.h>


union student 
{
	int id;
	char name[20];
	float per;	
};

void main()
{
	union student obj;
	
	printf("\nEnter Id : ");
	scanf("%d",&obj.id);
	printf("\nId is %d",obj.id);
	
	printf("\nEnter Name : ");
	scanf("%s",&obj.name);
	printf("\nName is %s",obj.name);
	
	printf("\nEnter percentage : ");
	scanf("%f",&obj.per);
	printf("\nYour Percentage is : %.2f",obj.per);
	
	
}