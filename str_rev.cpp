#include <iostream>
#include <string>
using namespace std;


void reverse(char* begin,char* end);

void rev_words(char* s)
{
	char* start=s;
	char* temp=s;

	while(*temp)
	{
		temp++;
		if(*temp=='\0')
		{
			reverse(start,temp-1);
		}
		else if(*temp==' ')
		{
			reverse(start,temp-1);
			start=temp+1;
		}
	}
	
	reverse(s,temp-1);
}


void reverse(char* begin,char* end)
{
	char temp;
	
	
	while(begin<end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

int main()
{
	char s[] = "I like programming very much but my life is fucked up";
	char* s1 = s;
	rev_words(s1);
	
	cout<<s;
		
	return 0;
}
