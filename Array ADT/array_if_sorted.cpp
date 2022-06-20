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
    cout<<"Elements are : "<<endl;
    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<endl;
}

void InsertSort(struct Array *arr, int x)
{
    int i =arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr-> A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}


void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j)swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    struct Array arr =  { {2,-4,-7,5,10,1-5}, 10, 7};
    // InsertSort(&arr, 6);
    // cout<<"If sorted 1 or 0 : "<<isSorted(arr)<<endl;
    Rearrange(&arr);
    Display(arr);
}