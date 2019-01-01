#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s = "abcdefghijkl";
	int l;
	l=s.size();
	
	int len_parts,n=4;
	int ctr=1;
	
	len_parts = l/n;
	cout<<len_parts<<"\n";
	
	int low=0,h=len_parts*ctr;
	for(int i=1;i<=n;i++)
	{
		//cout<<low<<"    "<<h<<"\n";
		cout<<s.substr(low,len_parts)<<"\n";
		ctr++;
		if(i<n)
		{
		low=h;
		h=len_parts*ctr;
		}
		//cout<<low<<"    "<<h<<"\n";
	}
	
	return 0;	
}
