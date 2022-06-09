#include<iostream>
using namespace std;

struct Rectangle
{
    int length, breadth;
};

void fun(Rectangle *r1)
{
    r1->length = 213;
    cout<<"Length "<<r1->length<<endl<<"Breadth "<<r1->breadth;

}

int main()
{
    Rectangle r = {12,3};

    fun(&r);
    cout<<endl<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth;
}