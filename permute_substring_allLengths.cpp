#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;



void permute(char *a,string prefix,int n,int k)
{
	
	if(k==0)
	{
		cout<<prefix<<"\n";
		return;
	}
		
		
	
	
	for(int i=0;i<5;++i)
	{
		string newPrefix;
		newPrefix = prefix+a[i];
		permute(a,newPrefix,n,k-1);
	}
		
}

int main()
{
	char arr[5] = {'a','e','i','o','u'};
	int n = sizeof(arr)/sizeof(arr[0]);
	//cout<<n<<"#####\n";
	int k=2;
	
	permute(arr,"",n,k);
	
	return 0;
}
