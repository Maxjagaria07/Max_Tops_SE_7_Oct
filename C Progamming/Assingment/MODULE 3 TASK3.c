#include<stdio.h>
void main()
{
	char school;
	char name;
	int clas;
	char div;
	int math;
	int ss;
	int sci;
	int guj;
	int hin;
	int total;
	float per;
	
	
	printf("\nENTER YOUR SCHOOL NAME : ");
	scanf("%s",&school);
	
	printf("\nENTER YOUR CLASS : ");
	scanf("%d",&clas);
	
	printf("\nENTER YOU CLASS DIVISION : ");
	scanf("%s",&div);
	
	printf("ENTER YOUR MATHS MARKS : ");
	scanf("%d",&math);
	
	printf("ENTER YOUR S.S MARKS : ");
	scanf("%d",&ss);
	
	printf("ENTER YOUR SCIENCE MARKS : ");
	scanf("%d",&sci);
	
	printf("ENTER YOUR GUJRATI MARKS : ");
	scanf("%d",&guj);
	
	printf("ENTER YOUR HINDI MARKS : ");
	scanf("%d",&hin);
	
	printf("YOUR TOTAL MARKS ARE %d",math+ss+sci+guj+hin);
	
	total=math+ss+sci+guj+hin;
	
	per=total/5;
	
	printf("YOUR PERCENTAGE IS %f",per);
	
	if(per>75)
	{
		printf("DISTINCTION");
	}
	else if(per>60)
	{
		printf("FIRST CLASS");
	}
	else if(per>50)
	{
		printf("SECOND CLASS");
	}
	else if(per>35)
	{
		printf("PASS");
	}
	else
	{
		printf("FAIL");
	}
}











