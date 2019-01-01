#include <iostream>
using namespace std;


int main()
{
	
	int n=8;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==i)
				cout<<i;
			else
				cout<<i<<" ";	
		}
		cout<<"\n";	
	}
	
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==i)
				cout<<i;
			else
				cout<<i<<" ";
		}
		cout<<"\n";
	}
	
	return 0;

}
