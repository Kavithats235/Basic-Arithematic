#include<iostream>
#include<exception>
using namespace std;
class cal
{
	public: float a,b;
		float res;
	public: int add()
		{
			return a+b;
		}
		int sub()
		{
			return a-b;
		}
		int mul()
		{
			return a*b;
		}
		int div()
		{
			try
			{
				if(b==0)
				{
					throw "error";
					//res=0;
					//return res;
				}
				res=(float)a/(float)b;
				return res;
			}
			catch(int x)
			{
				cout<<"\nDivision by Zero is not possible";
			}
			return res;
		}
};
int main()
{
	cal c;
	//int a1,a2,a3;
	float a4;
	//cout<<"\nEnter the numbers: ";
	cin>>c.a;
	cin>>c.b;
	cout<<"Number1 :"<<c.a;
	cout<<"\nNumber2 :"<<c.b;
	//a4=c.div();
	cout<<"\nAddition is "<<c.add();
	cout<<"\nSubtraction is "<<c.sub();
	cout<<"\nMultiplication is "<<c.mul();
	cout<<"\nDivision is "<<c.div();
	return 0;
}
