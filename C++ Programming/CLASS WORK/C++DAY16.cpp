#include<iostream>
using namespace std;

class Max
{
	private :
			int money;
			
			friend int AngelGiveMoneyToMax(Max);
	public:
			Max()
			{
				money=0;	
			}	
};

int AngelGiveMoneyToMax(Max mo)
{
	mo.money=5000;
	return mo.money;
}



int main()
{
	Max m;
	cout<<"Angel Give $ "<<AngelGiveMoneyToMax(m)<<" To Max";
	return 0;
}