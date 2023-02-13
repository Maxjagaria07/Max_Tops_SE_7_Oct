#include<stdio.h>
void main()
{
	int p;
	int t;
	int r;
	int simpleinterest;
	
	printf("\nENTER THE PRINCIPLE : ");
	scanf("%d",&p);
	printf("ENTER THE RATE OF INTEREST : ");
	scanf("%d",&r);
	printf("ENTER THE TIME OF ENTERING THE AMOUNT : ");
	scanf("%d",&t);
	simpleinterest=p*r*t;
	printf("YOUR SIMPLE INTEREST : %d",simpleinterest/100);
	printf("COMPOUND INTEREST : %d",simpleinterest-p);
}
	