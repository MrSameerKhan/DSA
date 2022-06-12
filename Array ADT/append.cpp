#include<iostream>
using namespace std;

struct sameer {
    int A[6];
    int size;
    int length;
};

void Display(struct sameer sam){

    cout<<"Elements are";
    for (int i=0;i<sam.length; i++)
        cout<<endl<<sam.A[i];
}

void Append(struct sameer *sam, int x)
{
    if (sam->length < sam->size)
        sam->A[sam->length++] = x;
}

int main(){
    struct sameer sam = {{3,6}, 6, 2};
    Append(&sam,33);
    Display(sam);
    

}