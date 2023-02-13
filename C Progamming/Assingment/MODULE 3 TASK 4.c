#include<stdio.h>
void main()
{
	int l;
	int b;
	int choice;
	
	printf("\nENTER THE LENGTH AND BREATH OF THE FOLLOWING TRIANGLE ,CIRCLE AND RECTANGLE\n");
	printf("\nFOR TRIANGLE PRESS T");
	printf("\nFOR CIRCLE PRESS C");
	printf("\nFOR RECTANGLE PRESS R");
	printf("\nENTER YOUR CHOICE : ");
	scanf("%s",&choice);	
	printf("\nENTER LENGTH : ");
	scanf("%d",&l);
	printf("\nENTER HEIGTH : ");
	scanf("%d",&b);
	
	switch(choice)
	{
		case 'T':printf("AREA OF TRIANGLE IS %d",1/2*b*l);
		break;
		
		case'R':printf("AREA OF RECTANGLE %d",l*b);
		break;
		
		case'C':printf("AREA OF CIRCLE %d",22/7*b*b);
		break;
	}
	
	
}
