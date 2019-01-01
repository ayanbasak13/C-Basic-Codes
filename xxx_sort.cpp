#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr [8]= {2,1,3,9,5,7,8,4};
	
	sort(arr,arr+8,greater<int>());
	
	//sort(arr,arr+8);     Ascending order
	
	for(int i=0;i<8;i++)
		cout<<arr[i]<<"    ";
		
	return 0;
}
