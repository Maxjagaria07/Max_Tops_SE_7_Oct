#include<iostream>
using namespace std;


class overloadingdemo
{
	public:
			
					void add()
					{
						int a=23;
						int b=34;
						cout<<"Addition of given number is : "<<a+b;	
					}
					
					int add(int a,int b)
					{
						return a+b;
					}
									
};


int main()
{
	overloadingdemo obj;
	obj.add();
	int n1;
	int n2;
	cout<<"\nENTER THE VALUE OF YOUR 1st NUMBER ";
	cin>>n1;
	cout<<"\nENTRE THE VALUE OF YOUR 2nd NUMBER ";
	cin>>n2;
	cout<<"ADDITION OF THE GIVEN NUMBERS IS : "<<obj.add(n1,n2);
	return 0;
}