
#include<stdio.h>
void main()
{
	char fname[20]="tops";
	char lname[20]="tech";
	printf("\nSTRING LENGTH : %d",strlen(fname));
	//printf("\nSTRING REVERSE : %s",	strrev(fname));
	printf("\nSTRINGC CONCATE : %s",strcat(fname,lname));
	printf("\nSTRING UPPERCASE : %s",strupr(fname));
	printf("\nSTRING LOWERCASE : %s",strlwr(fname));
}