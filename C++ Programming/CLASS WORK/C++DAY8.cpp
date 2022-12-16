#include<iostream>
using namespace std;

class function1
{
	protected :
				int length;
	public:
		void setvalue(int x)
		{
			length=x;	
		}			
};
class function2 : public function1
{
	public:
			int square()
			{
				return length*length;
			}	
};

class function3 : public function1
{
	public:
			int cube()
			{
				return length*length*length;
			}
};




int main()
{
	function2 obj;
	obj.setvalue(5);
	cout<<"\n\nTHE SQUARE IS"<<obj.square();
	
	function3 obj1;
	obj1.setvalue(9);
	cout<<"\n\nTHE CUBE IS "<<obj1.cube();	
	
	return 0;
}

