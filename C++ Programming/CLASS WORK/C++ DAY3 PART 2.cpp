#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"ENTER THE VALUE OF A : ";
	cin>>a;
	cout<<"ENTER THE VALUE OF B : ";
	cin>>b;
	int choice;
	cout<<"PRESS 1 FOR ADDITION\nPRESS 2 FOR SUBTRACTION\nPRESS 3 FOR MULTIPLICATION\nPRESS 4 FOR DIVISION";
	cout<<"ENTER YOUR CHOICE : ";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"YOUR ADDITION IS : "<<a+b;
		break;
		case 2:cout<<"YOUR SUBTRACTION IS : "<<a-b;
		break;
		case 3:cout<<"TECHNICAL ERROR";
		break;
		case4:cout<<"TECHNICAL ERROR";
		break;
		default:cout<<"NUMBER IS INVALID";
		break;
	}
	
	
	
	
}