#include<iostream>
using namespace std;

int main()
{
    int A[3] = {3,5,6};
    int *p;
    p = A;

    for (int i=0; i<3; i++)
    {
        cout<<"Value of A : "<< A[i]<<endl;
        cout<<"Value of A using P :"<<p[i]<<endl;

        cout<<"Address of p : "<<p<<endl;
        cout<<"value of p : "<<*p<<endl;
        cout<<endl;
        
    }
}