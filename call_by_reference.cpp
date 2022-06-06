#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
int temp;

temp = x;
x = y;
y = temp;

}

int main()
{
    int a= 20 , b =40;
    swap(a, b);

    cout<<"First"<<a<<endl;
    cout<<"second"<<b<<endl;
}