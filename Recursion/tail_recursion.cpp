#include<iostream>
using namespace std;

int recFun(int n)
{
    if (n>0)
    {
        cout<<n<<endl;
        recFun(n-1);
    }
}

int main()
{
    int x =3;
    recFun(x);
}