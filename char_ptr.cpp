#include <iostream>
#include <string>
using namespace std;



int possible(char** a,int num)
{
	int flag=-1;
	for(int i=1;i<num;i++)
	{
		
		char* l;

		l=a[i-1];
		
		
		while(*l!='\0')
			l=l+1;
			
		if(*(l-1) == a[i][0])
			flag=1;
		
		else
		{
			flag=-1;
			break;
		}
	}
	return flag;
}




int main()
{
	
	char* arr[6]={(char*)"ayan",(char*)"nunu",(char*)"utta",(char*)"abcb",(char*)"badu",(char*)"ullu"};
	int k;
	k = possible(arr,6);
	
	cout<<k;
	
	return 0;
}
