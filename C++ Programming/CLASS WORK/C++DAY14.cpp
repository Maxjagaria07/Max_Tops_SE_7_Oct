#include<iostream>
using namespace std;

class Sample
{
	public:
			void d1()
			{
				cout<<"\nNON-VIRTUAL METHOD CALLED";
			}
			
			virtual	void d2();
};

class Demo : public Sample
{
	
	public :
		
			void d2()
			{	
				cout<<"\nPURE VIRTUAL METHOD CALLED.";
			}
};
 

int main() 
{
	Demo obj;
	obj.d1();
	obj.d2();
	
	return 0;
}