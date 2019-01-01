#include <iostream>
using namespace std;

int main()
{
	
	int n=3;
	
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(int j=1;j<=n;j++)
				cout<<i<<" ";
			cout<<i+1;
		}
		
		else
		{
			cout<<i+1<<" ";
			for(int j=1;j<=n;j++)
			{
				if(j==n)
					cout<<i;
				else
					cout<<i<<" ";
			}
		}
		
		cout<<"\n";
	}
	return 0;
}
