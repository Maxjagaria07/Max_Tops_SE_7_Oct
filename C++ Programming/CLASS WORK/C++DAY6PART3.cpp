#include<iostream>
using namespace std;

class function1
{
	public:
			int a;	
					void geta()
					{
						cout<<"\n\nENTER THE VALUE OF A : ";
						cin>>a;
					}
					void showa()
					{
						cout<<"\n\nTHE VALUE OF A IS "<<a;
					}
};

class function2 : public function1
{
	public:
			int b;
					void getb()
					{
						cout<<"\n\nENTER THE VALUE OF B : ";
						cin>>b;
					}	
					
					void showb()
					{
						cout<<"\n\nTHE VALUE OF B IS "<<b;
					}
};

class function3 : public function2
{
	public:
			int c;
					void getc()
					{
						cout<<"\n\nENTER THE VALUE OF C : ";
						cin>>c;	
					}	
					
					void showc()
					{
						cout<<"\n\nTHE VALUE OF C IS "<<c;
					}
};



int main()
{
	function3 obj;
	obj.geta();
	obj.getb();
	obj.getc();
	obj.showa();
	obj.showb();
	obj.showc();
	return 0;
}