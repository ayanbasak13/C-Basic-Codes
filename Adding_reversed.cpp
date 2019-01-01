#include<iostream>
using namespace std;

int rev(int n)
{
	int r,sum=0;


	while(n>0)
	{
		r=n%10;
		sum = sum*10+r;
		n/=10;
	}
	
	return sum;
}

int main()
{
	int rev_sum,sum;
	int a,b,N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		sum=0;
		cin>>a>>b;
		int rev_a,rev_b;
		rev_a=rev(a);
		rev_b=rev(b);
		sum=rev_a+rev_b;
		rev_sum=rev(sum);
		cout<<rev_sum<<"\n";
	}	
}
