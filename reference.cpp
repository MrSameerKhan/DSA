#include<iostream>
using namespace std;

int main()
{

int a = 3;
int &r = a;
cout<<"Before a :"<<a<<" r :"<<r;

int b = 30;
r = b;

cout<<endl<<"After a :"<<a<<" r :"<<r;

}