#include <iostream>
using namespace std;

int main()
{
	int arr[3][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
	
	int r_b=0,r_e=3,c_b=0,c_e=6;
	
	
	while((r_b<r_e) && (c_b<c_e))
	{
		for(int j=c_b;j<c_e;j++)
			cout<<arr[r_b][j]<<"  ";
		r_b=r_b+1;
		for(int i=r_b;i<r_e;i++)
			cout<<arr[i][c_e-1]<<"  ";
		c_e=c_e-1;
		for(int j=c_e-1;j>=c_b;j--)
			cout<<arr[r_e-1][j]<<"  ";
		r_e=r_e-1;
		for(int i=r_e-1;i>=0;i--)
			cout<<arr[i][c_b]<<"  ";
		c_b=c_b+1;		
	
	}
	
	return 0;	
}
