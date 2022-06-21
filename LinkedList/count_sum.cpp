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


int count(struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}
int sum(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum(struct Node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rsum(p->next)+p->data;
}
int main()
{

    int A[]={5,6,7,0,10};
    Create(A,5);
    cout<<"Length is  "<<count(first)<<endl;
    cout<<"Sum is "<<sum(first)<<endl;
    cout<<"Recursive sum is "<<Rsum(first);
}