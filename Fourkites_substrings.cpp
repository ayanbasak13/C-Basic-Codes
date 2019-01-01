#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void permute(string a,string predict,int n,int k)
{
	
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
		{
			a=a.substr(0,i) + a.substr(i+1,n);
		}
	}
	
	


	if(k==0)
	{
		cout<<predict<<"\n";
		return;
	}
	/*else if((k==1) && (predict==""))
	{
		for(int i=0;i<n;i++)
		{
			string newPredict;
			newPredict = predict + a[i];
			permute(a,newPredict,n,k-1);
		
		}	
	}*/
	
	int l = predict.length();
	for(int i=0;i<n;i++)
	{
		string newPredict;
		if(a[i] > predict[l-1])
		{
			newPredict = predict + a[i];
			permute(a,newPredict,n,k-1);
		}
		
	}
	
}



int main()
{
	string b;
	string arr = "eren";
	sort(arr.begin(),arr.end());
	for(int i=1;i<4;i++)
	{
		if(arr[i]==arr[i-1])
		{
			b=arr.substr(0,i) + arr.substr(i+1,4);
		}
	}
	cout<<b<<"\n";
	int l = arr.length();
	//int k = 3;
	
	for(int j=1;j<=4;j++)
		permute(arr,"",l,j);
	
	return 0;
	
}
