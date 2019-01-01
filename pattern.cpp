#include<iostream>
using namespace std;

int main()
{
	int n,c=0;
	n=4;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(c!=1)
			{
				int k=(n*c)+j;
				if(j==n)
					cout<<k;
				else
					cout<<k<<"*";
			}
		}
		c++;
		if(c!=1)
			cout<<"\n";
	}
	
	for(int p=1;p<=n;p++)
	{
		if(p==n)
			cout<<3+p;
		else
			cout<<3+p<<"*";
	}
	return 0;
}
