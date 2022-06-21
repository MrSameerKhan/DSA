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


int Max(struct Node *p)
{
    int max= INT32_MIN;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}
int RMax(struct Node *p)
{
    int x=0;

    if(p==0)
        return INT32_MIN;
    x=RMax(p->next);
    if(x>p->data)
        return x;
    else return p->data;
}

int main()
{

    int A[]={5,66,7,0};
    Create(A,4);
    cout<<"Max value is "<<Max(first)<<endl;
    cout<<"R max value is "<<RMax(first);
}