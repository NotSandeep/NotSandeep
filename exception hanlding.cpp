//Exception Handling
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int r;
	cout<<"Enter numerator ";
	cin>>i;
	cout<<"Enter denominator ";
	cin>>j;
	try
	{
		if(j==0)
		{
			throw j;
		}
		r=i/j;
		std::cout<<i<<"/"<<j<<"="<<r;	
	}
	catch(int k)
	{
		std::cout<<"\nError::infinty ";
	}
	
	return 0;
}
