#include<iostream>
using namespace std;

int headRecursion(int n)
{
    if (n>0)
    {
        headRecursion(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int x=3;
    headRecursion(x);
}