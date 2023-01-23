#include<iostream>
using namespace std;

class print
{
	public:
		void make()
		{
		
		int i;
		
		for(i=200;i<=300;i++)
		{
			cout<<"\n"<<i;
		}
	}
};

int main()
{
	print obj;
	obj.make();
	return 0;
}