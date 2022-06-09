#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main()
{

Rectangle *p;
p = new Rectangle;

p->length = 22;
p->breath = 43;

cout<<p->length<<endl;
cout<<p->breath<<endl;

}