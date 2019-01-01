#include<iostream>
using namespace std;

int rev(int n)
{
	int r,sum=0;
	int d=0;
	while(n>0)
	{
		n/=10;
		d=d+1;
	}
	cout<<d<<"\n";
	d=d-1;
	
	while(n>0)
	{
		r=n%10;
		sum = sum + ((10^d)*r);
		n/=10;
	}
	
	return sum;
}

int main()
{
	int rev_sum,sum=0;
	int a,b;
	cin>>a>>b;
	//cout<<a<<"####"<<b<<"\n";
	int rev_a,rev_b;
	rev_a=rev(a);
	cout<<rev_a;
	rev_b=rev(b);
	sum=rev_a+rev_b;
	rev_sum=rev(sum);
	//cout<<rev_sum;
}
