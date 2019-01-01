#include<bits/stdc++.h> 
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


void permute(string s,string out)
{
	if(s.size()==0)
	{
		cout<<out<<"\n";
		return;
	}
	
	
	for(int i=0;i<s.size();i++)
	{
		permute(s.substr(1),out+s[0]);
			
		rotate(s.begin(),s.begin()+1,s.end());
	}
}

int main()
{
	string str="ABC";
	permute(str,"");

	return 0;
	
}
