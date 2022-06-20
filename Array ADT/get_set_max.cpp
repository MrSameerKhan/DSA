#include<iostream>
using namespace std;

struct Array {int A[10],size,length;};

int Get(struct Array arr, int index){
    if(index>=0 && index<arr.length)
        return arr.A[index];    
    return -1;
}

int Set(struct Array *arr, int index, int value)
{
    if(index>=0 && index<arr->length)
        arr->A[index] = value;
        
}

int Max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length; i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int  min=arr.A[0];
    int i;
    for(i=1; i<arr.length; i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int Sum(struct Array arr)
{
    int s=0, i;
    for (i=0; i<arr.length; i++)
        s+=arr.A[i];
    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct Array arr = { {2,1,54,9,22}, 10, 5};
    int get_index= 4;
    cout<<"At index "<<get_index<<" value is : "<<Get(arr, get_index)<<endl;
    int set_index = 0;
    int set_value = 15;
    // cout<<"Change value to "<<set_value<<" at index : "<<Set(&arr, set_index, set_value)<<endl;
    cout<<"Max value : "<<Max(arr)<<endl;
    cout<<"Min value : "<<Min(arr)<<endl;
    cout<<"Sum is : "<<Sum(arr)<<endl;
    cout<<"Average is : "<<Avg(arr)<<endl;
}