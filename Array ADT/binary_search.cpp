#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout<<"Elements are :"<<endl;
    for (int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<endl;
}

int binarySearch(struct Array arr,int key)
{
    int l, mid, h;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else 
            l= mid+1;
    }   
    return -1;
}

int recursiveBinarySearch(int a[], int l, int h, int key){
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return recursiveBinarySearch(a, l, mid-1, key);
        else 
            return recursiveBinarySearch(a, mid+1, h, key);
    }
    return -1;
}

int main()
{
    struct Array arr = {{1,2,3,4,5}, 10, 5};
    int k = 5 ;
    // cout<<"Value "<<k<<" is present at index : "<<binarySearch(arr, k)<<endl;
    cout<<"Value "<<k<<" is present at index : "<<recursiveBinarySearch(arr.A,0,arr.length,k)<<endl;
    Display(arr);
}