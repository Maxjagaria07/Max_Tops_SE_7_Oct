#include<iostream>
using namespace std;

class function1
{
	public:
			int a;
						void getA()
						{
							cout<<"\n\nENTER THE VALUE OF A : ";
							cin>>a;
						}
						
						 void showA()
						 {
						 	cout<<"\n\nTHE VALUE OF A IS "<<a;
						 }
};


class function2 : public function1
 
{
	public:
			int b;
					void getB()
					{
						cout<<"\n\nENTER THE VALUE OF B : ";
						cin>>b;
					}
					void showB()
					{
						cout<<"\n\nTHE VALUE OF B IS "<<b;
					}
		
};


class function3 : public function1 
{
	public:
			int c;
					void getC()
					{
						cout<<"\n\nENTER THE VALUE OF C : ";
						cin>>c;	
					}	
					void showC()
					{
						cout<<"\n\nTHE VALUE OF C IS "<<c;
					}
					
};


class function4 :public function1
{
	public:
			int d;
					void getD()
					{
						cout<<"\n\nENTER THE VALUE OF D : ";
						cin>>d;
					}
					void showD()
					{
						cout<<"\n\nTHE VALUE OF D IS "<<d;
					}
};

int main()
{
	function2 obj;
	obj.getA();
	obj.getB();
	obj.showA();
	obj.showB();
	
	
	
	function3 obj1;
	obj1.getA();
	obj1.getC();
	obj1.showA();
	obj1.showC();
	
	
	function4 obj2;
	obj2.getA();
	obj2.getD();
	obj2.showA();
	obj2.showD();
	return 0;
}

