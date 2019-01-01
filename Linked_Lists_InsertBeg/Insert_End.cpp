#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node* next;
}*start,*rear,*newptr,*ptr,*temp;

Node* Create(int);
void Insert_End(Node*);
void Display(Node*);


Node* Create(int n)
{
    ptr=new Node;
    ptr->data=n;
    ptr->next=NULL;
    return ptr;
}

void Insert_End(Node* np)
{
    if(start==NULL)
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
    newptr=Create(2);
    Insert_End(newptr);
    newptr=Create(5);
    Insert_End(newptr);
    newptr=Create(7);
    Insert_End(newptr);
    Display(start);
    
    pop();
    cout<<"\n";
    Display(start);
    
    return 0;
}
