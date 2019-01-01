#include<iostream>
using namespace std;

int main()
{
	int n1=14,n2=24;
	
	while(n1!=n2)
	{
		if(n1>n2)
			n1-=n2;
		else
			n2-=n1;
	}
	cout<<"GCD = "<<n1;
	
	return 0;
}
