#include<iostream>
using namespace std;

struct Student { 
    int age; 
    int roll;
    char j;
    };

int main()
{
    struct Student stud = {222, 300};

    cout<<stud.age<<endl;
    cout<<stud.roll<<endl;

    printf("%d", sizeof(stud));
}