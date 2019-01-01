#include <iostream>
#include <string>
using namespace std;


int main()
{
	string s = "My life is fucked up";
	string rev[100];
	string temp="";
	int c=0;
	
	int l=s.length();
	
	for(int i=0;i<l;i++)
	{
		if(s[i]!=' ')
		{
			temp = temp+s[i];
		}
		rev[c++]=temp;
			
		if(s[i]==' ')
		{
			if(i<l)
			{
				temp="";
				continue;
			}
		}
		
	}
	
	
	int p=0;
	while(rev[p]!="\0")
	{
		cout<<rev[p]<<" ";
		p++;
	}
	
	return 0;
}
