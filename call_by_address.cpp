#include<iostream>
using namespace std;

void swap(int *p, int *q)
{
    int temp;

    temp=*p;
    *p=*q;
    *q=temp;

}


int main()
{

    int num1 = 10, num2 = 20;

    swap(&num1, &num2);
    cout<<"First number"<< num1<< endl;
    cout<<"Second number"<< num2 << endl;
}