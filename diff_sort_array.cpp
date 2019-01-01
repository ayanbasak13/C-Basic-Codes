#include <iostream>
using namespace std;


void wave_sort_inc(int a[],int s,int e)
{
	int temp;
	for(int i=s;i<e-1;i++)
	{
		for(int j=s;j<e-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}




void wave_sort_dec(int a[],int s,int e)
{
	int temp;
	for(int i=s;i<e-1;i++)
	{
		for(int j=s;j<e-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}




int main()
{
	int arr[] = {2,4,9,8,1,7,16,13,5,14,10,15};
	int l = sizeof(arr)/sizeof(arr[0]);
	int k=7;
	
	
	wave_sort_inc(arr,0,k);
	wave_sort_dec(arr+k,0,l-k);
	
	for(int i=0;i<l;i++)
		cout<<arr[i]<<"  ";
		
	return 0;
	
}
