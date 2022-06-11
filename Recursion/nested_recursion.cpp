#include<iostream>
using namespace std;

int nestedRec(int n)
{
    if(n>100)
    {
        return n-10;
    }
    return nestedRec(nestedRec(n+11));
}

int main()
{
    int r;
    r = nestedRec(200);
    cout<<r<<endl;

}