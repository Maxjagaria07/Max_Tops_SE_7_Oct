#include<iostream>
using namespace std;

template<typename t>  

t add(t a,t b)
{
	return a+b;
}


int main()
{
	cout<<"addition"<<add<int>(2,2);
	
	return 0;
}