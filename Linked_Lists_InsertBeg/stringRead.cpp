#include <string>
#include <sstream>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int l=0;
    string s = "100 123 42";
    vector<string> result;
    stringstream is(s);
    for(string k; is >> k; )
    	result.push_back(k);
    	
	cout<<result.size();
		
    //cout<<l<<"\n";
    return 0;
}
    
