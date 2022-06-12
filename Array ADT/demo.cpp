#include<iostream>
using namespace std;

struct Array
{
    int *pointer_A;
    int size_array;
    int lenght_array;

};

void Display(struct Array arr)
{
    int i;
    cout<<endl<<"Elements are"<<endl;
    for(i=0;i<arr.lenght_array;i++)
        cout<<arr.pointer_A[i]<<" "10;
}

int main()
{
    struct Array arr;

    cout<<"Enter size of an array";
    cin>>arr.size_array;

    arr.pointer_A = new int[arr.size_array];
    arr.lenght_array=0;

    int n,i;

    cout<<"Enter number of numbers";
    cin>>n;

    cout<<"Enter all elements"<<endl;
    for(i=0;i<n; i++)
        cin>>arr.pointer_A[i];
    arr.lenght_array = n;

    Display(arr);

    
}