#include<iostream>
using namespace std;

int main()
{

    int *p;
    p = (int *)malloc(3*sizeof(int));

    p[0]=23;
    p[1]=33;
    p[2]=12;

    for (int i=0; i<3;i++)
    cout<<"Array value : "<<p[i]<<endl;

    free(p);
}