
#include<iostream>
using namespace std;

int treeRec(int n )
{

    if(n>0)
    {
        cout<<n<<endl;
        treeRec(n-1);
        treeRec(n-1);
    }
}

int main()
{
    treeRec(3);
}