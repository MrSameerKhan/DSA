#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

int main()
{
    int num1 = 22 , num2 = 32, sum;

    sum = add(num1, num2);

    cout<<"Sum is : "<< sum;
}