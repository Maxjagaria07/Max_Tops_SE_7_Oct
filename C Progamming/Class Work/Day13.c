#include<stdio.h>

struct Max
{
	int roll;
	char name[20];
	float per;	
};

void main()
{
	struct Max m;
	printf("ENTER YOUR NAME : ");
	scanf("%s",&m.name);
	printf("ENTER YOUR ROLL NUMBER : ");
	scanf("%d",&m.roll);
	printf("ENTER YOUR PERCENTAGE");
	scanf("%f",&m.per);
	
	printf("\nYOUR NAME IS %s",m.name);
	printf("\nYOUR ROLL NUMBER IS %d",m.roll);
	printf("\nYOUR PERCENTAGE IS %.2f",m.per);
	
}