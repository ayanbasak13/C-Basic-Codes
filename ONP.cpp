//  ((a-b)*(z+x))
//  ab-zx+*



#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
	int t;
	string str;
	cin>>t;
	
	
	for(int c=0;c<t;c++)
	{
		cin>>str;
		queue <char> q;
		stack <char> op;		
		for(int i=0;i<str.length();i++)
		{
			if(((str[i]>='a') && (str[i]<='z')) ||((str[i]>='A') && (str[i]<='Z')))
				q.push(str[i]);
				
				
			else if((str[i]=='+')||(str[i]=='-')||(str[i]=='*')||(str[i]=='/')||(str[i]=='^'))
				op.push(str[i]);
				
				
			else if(str[i]==')')
			{
				if(!q.empty())
				{
					while(!q.empty())
					{
						cout<<q.front();
						fflush(stdout);
						q.pop();
					}
				}
				if(!op.empty())
				{
						cout<<op.top();
						fflush(stdout);
						op.pop();
				}
				
				
			}
		}
	}
	
	return 0;
}
