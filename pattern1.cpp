#include <iostream>
using namespace std;


int main()
{
	int c=0,n = 5;
	
	for(int i=1;i<=n;i++)
	{
		int arr[i];
		int p=0;
		for(int j=1;j<=i;j++)
		{

			if(i%2!=0)
			{
				c=c+1;
				if(j==i)
					cout<<c ;
				else
					cout<<c<<"*";
			}
			else
			{
				c=c+1;
				arr[p++]=c;
			}

		}
		
		if(i%2==0)
		{
			for(int k=i-1;k>=0;k--)
			{
				if(k==0)
					cout<<arr[k];
				else
					cout<<arr[k]<<"*";		
			}
		}
	
		cout<<"\n";
	}
	return 0;
}
