#include<iostream>
using namespace std;

class Max
{
	public:
		static int objcount;
			Max()
			{
				cout<<"\nCONSTRUCTOR CALLED.";
				objcount++;	
			}	
};

int Max :: objcount=0; 

int main()
{
	Max m,m1,m2,m3,m4;
	cout<<"\n\nNUMBER OF OBJECTS = "<<m1.objcount;
	
	return 0;
}