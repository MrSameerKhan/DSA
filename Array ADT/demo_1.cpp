#include<iostream>
using namespace std;

struct Array{
    int A[20], size, length;
};


void Display(struct Array arr)
{
    int i;
    cout<<"Elements are";
    for (i=0;i<arr.length;i++)
        cout<<arr.A[i];
}

int main()
{
    struct Array arr={{2,3,5},20,5};
    Display(arr);

}