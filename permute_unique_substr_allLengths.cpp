#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;



void permute(char *a,string predict,int n,int k)
{
	//int cnt = -1;
	if(k==0)
	{
		cout<<predict<<"\n";
		return;
	}
	else if((k==1) && (predict==""))
	{
		for(int i=0;i<n;i++)
		{
			string newPredict;
			newPredict = predict + a[i];
			permute(a,newPredict,n,k-1);
		
		}	
	}
	
	int l = predict.length();
	for(int i=0;i<n;i++)
	{
		string newPredict;
		if(a[i] >= predict[l-1])
		{
			newPredict = predict + a[i];
			permute(a,newPredict,n,k-1);
		}
		
	}
	
}
int main()
{
	char arr[5] = {'a','e','i','o','u'};
	int n = sizeof(arr)/sizeof(arr[0]);
	//cout<<n<<"#####\n";
	int k=2;
	
	permute(arr,"",n,k);
	
	/*if('f'<'e')
		cout<<"Yes";
	else
		cout<<"No";*/
	
	return 0;
}
