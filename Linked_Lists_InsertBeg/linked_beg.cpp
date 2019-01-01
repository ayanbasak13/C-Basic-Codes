#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node* next;
}*start,*newptr,*save,*ptr;

Node* Create(int);
void Insert_Beg(Node*);
void Display(Node*);


Node* Create(int n)
{
    ptr=new Node;
    ptr->data=n;
    ptr->next=NULL;
    return ptr;
}

void Insert_Beg(Node* np)
{
    if(start==NULL)
        start=np;
    else
    {
        save=start;
        start=np;
        np->next=save;
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
    Insert_Beg(newptr);
    newptr=Create(5);
    Insert_Beg(newptr);
    newptr=Create(7);
    Insert_Beg(newptr);
    Display(start);
    return 0;
}
