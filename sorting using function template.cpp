//Sort using function template 
#include<iostream>
#include<conio.h>
using namespace std;
template <typename T>
T sort(T n1)
{
	
	T num[50],i,n,j,temp;
	n=n1;
	for(i=0;i<n;i++)
	{
		cout<<"Enter number ";
		cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	cout<<"The ascended numbers are"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<endl;
	}
}
int main()
{
	
	int res,n2;
	cout<<"How many numbers do you want to enter "<<endl;
	cin>>n2;
	res=sort<int>(n2);
	return 0;
}
