#include<iostream>
using namespace std;


int main()
{
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={7,8,9,10,11,12};
	
	int sum=0;
	for(int i=0,j=5;i<=5,j>=0;i++,j--)
		sum+=arr1[i]*arr2[j];
		
	cout<<sum;
	return 0;
}
