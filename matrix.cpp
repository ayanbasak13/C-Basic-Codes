#include <iostream>
using namespace std;


int main()
{
	int arr[4][4]={{1,1,1,1},{1,1,0,0},{1,0,0,0},{1,1,0,0}};
	int cnt[4];
	
	for(int i=0;i<4;i++)
	{
		cnt[i]=0;
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==0)
				cnt[i]+=1;
		}
	}
	
	int max=0;
	
	for(int k=0;k<4;k++)
	{
		if(cnt[k]>max)
			max=k;
	}
	
	for(int j=0;j<4;j++)
		cout<<arr[max][j]<<" ";
	
	
	return 0;
}
