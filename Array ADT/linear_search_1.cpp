#include<iostream>
#include<stdio.h>
using namespace std;

struct sameer{
    int A[10], size, length;
};

int linear_search(struct sameer sam, int key)
{
    for(int i=0; i<sam.length;i++)
        {
            if (key==sam.A[i])
                return i;
        }

}

void swap(int *x, int *y)
{
int temp;
temp =*x;
*x = *y;
*y = temp;
}

int linear_search_transpo(struct sameer *sam, int key)
{
    for(int i=0; i<sam->length; i++)
    {
        if(key==sam->A[i])
        {
            swap(&sam->A[i], &sam->A[i-1]);
            return i;
        }
            
    }

}

void Display(struct sameer sam)
{
    
    cout<<"Elements are"<<endl;
    for (int i=0;i<sam.length; i++)
        cout<<i<<endl;
}

int main()
{
    struct sameer sam={{2,3,5,7,9,11}, 10, 10};
    
    int j = 5;
    //  int r = linear_search(sam, j);
    int r = linear_search_transpo(&sam, j);
     cout<<j<<" value is present at index : "<<r;
     // Display(sam);
}
