#include <iostream>
using namespace std;


int main()
{
	int temp;
	int arr[8] = {5,9,2,3,6,4,8,7};
	int l=sizeof(arr)/sizeof(arr[0]);
	
	
	for(int i=0;i<l-2;i+=2)
	{
		if(i>=l)
			break;
		for(int j=0;j<l-i-2;j+=2)
		{
			if(arr[j]>arr[j+2])
			{
				temp=arr[j];
				arr[j]=arr[j+2];
				arr[j+2]=temp;
			}
		}
	}
	
	
	for(int i=1;i<l-1;i+=2)
	{
		if(i>=l)
			break;
		for(int j=1;j<l-(i-1)-2;j+=2)
		{
			if(arr[j]>arr[j+2])
			{
				temp=arr[j];
				arr[j]=arr[j+2];
				arr[j+2]=temp;
			}
		}
	}
	
	for(int i=0;i<l;i++)
		cout<<arr[i]<<"  ";
	
	return 0;
}
