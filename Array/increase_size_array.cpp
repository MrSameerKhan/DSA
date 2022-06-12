#include<iostream>
using namespace std;

int main()
{
    int *p, *q;
    int i;

    p = new int[3];
    p[0] = 10; p[1]=22; p[2]=31;

    q = new int[3];

    for (i=0;i<3;i++)
        q[i]=p[i];
    
    free(p);
    p=q;
    q=NULL;

    for(i=0;i<3;i++)
        cout<<p[i]<<endl;
}