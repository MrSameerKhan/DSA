#include<iostream>
using namespace std;


int x=0;

int staticRec(int n)
{
    
    if (n>0)
    {
        x++;
        return staticRec(n-1)+x;
    }
}

int main()
{
    int r;
    r = staticRec(5);
    cout<<r<<endl;

    // r = staticRec(5);
    // cout<<r<<endl;
}