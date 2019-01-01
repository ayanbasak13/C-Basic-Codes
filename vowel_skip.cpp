#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "abcdefghijkzzedpomniuakkjhda";
	string s1;
	
	for(int i=0;i<s.length();i++)
	{
		switch(s[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':continue;
			default:s1+=s[i];
			break;
		}
	}
	cout<<s1;
}
