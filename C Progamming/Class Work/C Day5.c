#include<stdio.h>
void main()
{
	printf("Welcome to C PRIOGRAMMING\n");
	printf("Today we will make a full Calculator\n");
	printf("Take two Numbers for Addition\n");
	printf("First Number - ");
	int a;
	scanf("%d",&a);
	printf("Second Number - ");
	int b;
	scanf("%d",&b);
	printf("Your Answer for Addition of this two Number is %d\n\n\n",a+b);
	printf("Now Take two numbers for Subtraction \n ");
	int c;
	int d;
	printf("First Number");
	scanf("%d",&c);
	printf("Second Number");
	scanf("%d",&d);
	printf("Your Answer for Subtraction of this two Numbers is %d\n\n\n",c-d);
	printf("Now Take two Numbers for Multiplication\n");
	printf("First number ");
	int e;
	scanf("%d",&e);
	printf("second number ");
	int f;
	scanf("%d",&f);
	printf("Your Answer for the Multiplication of this two number is  %d\n\n\n",e*f);
	printf("Now we will devide two numbers\n");
	float g;
	float h;
	printf("First Number -");
	scanf("%f",&g);
	printf("Second Number - ");
	scanf("%f",&h);
	printf("Your Answer For The divide of these Two Numbers is %.2f\n\n\n",(g/h));
	printf("Now We Will Find The Area Of Square\n");
	int i;
	int j;
	printf("Enter The Length Of Square");
	scanf("%d",&i);
	printf("Enter The Width Of Square");
	scanf("%d",&j);
	printf("Your Area Of The Square Is %d\n\n\n",i*j);
}


	
	