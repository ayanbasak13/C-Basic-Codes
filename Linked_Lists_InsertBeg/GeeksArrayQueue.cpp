#include <string>
#include <sstream>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct Node
{
	int data;
	Node *next;
}*start,*rear,*ptr,*newptr,*temp;


Node* Create(int n)
{
	ptr=new Node;
	ptr->data = n;
	ptr->next = NULL;
	return ptr;
}


void Insert_End(Node* np)
{
	if (start==NULL)
	{
		start=np;
		rear=np;
	}
	
	else
	{
		rear->next = np;
		rear=np;
	}
}


void pop()
{
	if (!(start==NULL))
	{
		temp = start;
		start = start->next;
		delete temp;
	}	
	/*else
		cout<<"Empty!!!";*/
}




void Display(Node* np)
{
    while(np!=NULL)
    {
        cout<<np->data<<"    ";
        np=np->next;
    }
}



int main() 
{
	int l=0;
    string s = "1 5 1 1 2"; 
    vector<int> result;
    stringstream is(s);
    for(int k; is >> k; )
    	result.push_back(k);
    
    l =  result.size();
    //cout<<l<<"\n";
    /*for(int i=0;i<l;i++)
    	cout<<result[i]<<" ";*/
    
    int i = 0;
    
    while(i<l)
    {
    	if(result[i]==1)
    	{
    		newptr=Create(result[i+1]);
    		Insert_End(newptr);
    		Display(start);
    		cout<<"\n";
    		i=i+2;
		}
		else if (result[i]==2) //&& ((result[i-1])!=1))
		{
			pop();
			Display(start);
			i=i+1;
		}
		
	}
    return 0;
}
    
