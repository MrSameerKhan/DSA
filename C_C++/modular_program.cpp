#include<stdio.h>
#include<iostream>
using namespace std;



int area(int len, int bre)
{

    return len*bre;

}


int main()
{
    int length, breadth, a;

    cout<<"Enter length and breadth:"<<endl;
    cin>>length>>breadth;

    a = area(length, breadth);

    cout<<"Length : "<<length<<endl<<"Breadth : "<<breadth<<endl<<"Area : "<<a<<endl;

}