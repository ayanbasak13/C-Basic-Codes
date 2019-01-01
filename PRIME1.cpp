#include<iostream>
using namespace std;


int main()
{
	int N,a,b,flag;
	cin>>N;
	
	
	if(N<=150)
	{
		for(int i=0;i<N;i++)
		{
			if((i>0)&&(i<N))
				cout<<"\n";
			cin>>a>>b;
			for(int j=a;j<=b;j++)
			{
				flag=0;
				
				if(j==1)
					flag=1;
				else if(j==2)
					flag=0;
				else
				{
					for(int k=2;k*k<=j;k++)
					{
						if(j%k==0)
						{
							flag=1;
							break;
						}
								
					}
					if(flag==0)
					{
						cout<<j<<"\n";
						fflush(stdout);
					}
				}
			}
		}
	}
	return 0;	
}
