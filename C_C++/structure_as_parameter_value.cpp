#include<iostream>
using namespace std;

struct Rectangle
{

    int length, breadth;
};

void fun(Rectangle r)
{
    cout<<"Length"<<r.length<<endl<<"Breadth"<<r.breadth;
}

int main()
{
Rectangle r = {10,22};

fun(r);
cout<<endl<<"Length"<<r.length<<endl<<"Breadth"<<r.breadth;

}