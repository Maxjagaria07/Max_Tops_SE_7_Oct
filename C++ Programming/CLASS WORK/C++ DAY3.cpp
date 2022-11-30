#include<iostream>
using namespace std;
int main()
{
	//char name[20];
	string name;
	//char add[20];
	string add;
	int std;
	cout<<"ENTER YOUR NAME";
	getline(cin,name);
	
	cout<<"ENTER YOUR ADDRESS";
	getline(cin,add);
	cout<<"ENTER YOUR STANDARD";
	cin>>std;
	cout<<"\nYOUR NAME IS : "<<name;
	cout<<"\nYOUR STANDARD IS : "<<std;
	cout<<"\nYOUR ADDRESS IS : "<<add;
	
	
	
	
	
	
	return 0;
}