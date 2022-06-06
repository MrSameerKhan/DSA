#include<iostream>
using namespace std;

int small_func(int A[], int n)
{

for(int i=0;i<n;i++)
cout<<A[i]<<endl;

}

int main(){

    int A[]={2,4,2,4,45};
    int n = 5;

small_func(A, n);



}