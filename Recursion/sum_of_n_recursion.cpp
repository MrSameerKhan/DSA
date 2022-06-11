#include<iostream>
using namespace std;

int sumFun(int n)
{
    if (n==0)
        return 0;
    return sumFun(n-1)+n;
}
int Isum(int n)
{
    int s=0;
    int i;
    for(i=1;i<=n;i++)
        s=s+i;
    return s;
}
int main()
{
    int r;
    r = sumFun(5);
    // r=Isum(5);
    cout<<r<<endl;
    return 0;
} 
