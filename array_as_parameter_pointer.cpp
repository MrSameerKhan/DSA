#include<iostream>
using namespace std;



int * small_func(int size)
{

    int *p;
    p =new int[size];

    for(int i=0; i<size; i++)
    p[i] = i+1;

    return p;
}

int main()
{
int *ptr, sz = 7;

ptr = small_func(sz);

for (int i=0; i<sz;i++)
cout<<ptr[i]<<endl;

}