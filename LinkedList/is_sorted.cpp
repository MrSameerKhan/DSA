#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void Create(int A[], int n)
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
int isSorted(struct Node *p)
{
 int x=-65536;
 
 while(p!=NULL)
 {
 if(p->data < x)
 return 0;
 x=p->data;
 p=p->next;
 }
 return 1;
 
}
int main()
{
    int A[] = {10,20,3,40,50};
    Create(A, 5);
    if(isSorted(first))
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
}