#include<iostream>
using namespace std;

int staticRec(int n)
{
    static int x=0;
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
}