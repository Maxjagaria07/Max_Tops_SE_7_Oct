#include<iostream>
using namespace std;

template <typename t>

	t add(t a, t b)
	{
		return a+b;
	}

int main()
{
	cout<<" "<<add<int>(54,5);
	cout<<" "<<add<string>("Max","Om");
	cout<<" "<<add<float>(54.5f,45.8f);
	
	return 0;
}