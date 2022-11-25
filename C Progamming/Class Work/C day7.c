#include<stdio.h>
void main()
{
	int rollno,a,b,c,total,std;
	char name[20];
	float z;
	printf("\nENTER YOUR NAME : ");
	scanf("%s",&name);
	printf("\nENTER YOUR STANDARD : ");
	scanf("%d",&std);
	printf("\nENTER YOUR MATHS MARKS : ");
	scanf("%d",&a);
	printf("\nENTER YOUR PHYSICS MARKS : ");
	scanf("%d",&b);
	printf("\nENTER YOUR CHEMESTRY MARKS : ");
	scanf("%d",&c);
	total=a+b+c;
	z=total/3;
	printf("\nYOUR TOTAL MARKS ARE : %d",total);
	printf("\nYOUR PERCENTAGE FOR THIS EXAMS ARE : %.2f",z);
	
	if(z>=80)
	{
		printf("\n%.2f MARKS ,YOU ARE SO GOOD IN THIS",z);
	}
	else if (z>=60)
	{
		printf("\n%.2f MARKS GOOD",z);
	}
	else
	{
		printf("\n%.2f MARKS YOU ARE FAIL",z);
	}
	
}
	
	
	