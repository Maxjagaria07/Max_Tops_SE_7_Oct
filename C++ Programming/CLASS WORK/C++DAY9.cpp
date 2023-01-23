#include<iostream>
using namespace std;

class scopedemo
{
	public:
			void text();
			
			
			void addition(int a,int b);
			
			
			int add(int a,int b);
			
			int sub(int d , int e);
				
};			

void scopedemo :: text()
				  {
				  	cout<<"\nWELCOME TO SCOPE DEMO";
				  }
void scopedemo :: addition(int a,int b)
					{
						cout<<"\nADDITION IS : "<<a+b;
					}
					
int scopedemo :: add(int a,int b)
					{
						return a+b;
					}
					
int scopedemo :: sub(int d, int e)
					{
						return d-e;
					}
					
					
int main()
{
	scopedemo obj;
	obj.text();
	
	
	obj.addition(76,89);
	
	
	int a;
	int b;
	cout<<"\nENTER THE VALUE OF A : ";
	cin>>a;
	cout<<"ENTER THE VALUE OF B : ";
	cin>>b;
	cout<<"\nTHE ADDITION OF THE GIVEN NUMBER IS "<<obj.add(a,b);
	
	int d;
	int e;
	cout<<"\nENTER THE VALUE OF D ";
	cin>>d;
	cout<<"ENTER THE VALUE OF E ";
	cin>>e;
	cout<<"THE SUBTRACTION OF THE GIVEN NUMBER IS "<<obj.sub(d,e);
	return 0;
}