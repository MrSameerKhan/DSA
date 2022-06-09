#include<iostream>
using namespace std;

int main()
{

    int *p;
    p = new int[3];
    p[0]=33; p[1]=43; 

    for (int i=0; i<3; i++)
    cout<<"Array value : "<<p[i]<<endl;

    delete [] p;
}