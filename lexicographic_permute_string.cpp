#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void permute(string str)
{
	do
	{
		cout<<str<<"\n";
	}while(next_permutation(str.begin(),str.end()));
	
	
}


int main()
{
	string s = "aba";
	sort(s.begin(),s.end());
	permute(s);
	
	return 0;
}
