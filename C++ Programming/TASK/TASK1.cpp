#include<iostream>
using namespace std;

	class welcome
	{
		public:
			void welcomeing()
			{
				
				cout<<"WELCOME TO MAX JAGARIA'S ATM\n\n\n";
				cout<<"PRESS 1 TO GET STARTED";
				int start;
				cout<<"PRESS 1: ";
				cin>>start;
			}
	};

int main()
{
	welcome w;
	w.welcomeing();
	return 0;
}