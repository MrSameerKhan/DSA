#include<iostream>
using namespace std;

int main(){

    int a = 3;

    int *p;
    p = &a;

    cout<<"Address in C++ : "<<p<<endl;
    cout<<"Value in C++ : "<<*p<<endl;

    printf("Pointer address : %d \n", p);
    printf("Pointer value : %d", *p);
}