#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node * next;
}*first=NULL;


void Create(int A[],int n )
{
    int i;
    struct Node *t, *last;
    first= new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void recursiveDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<endl;
        recursiveDisplay(p->next);
    }
}
int main()
{

    int A[]={5,6,7,0};
    Create(A,4);
    recursiveDisplay(first);

}