#include<iostream>
using namespace std;

struct sameer {
    int A[10];
    int size;
    int length;
};

void Display(struct sameer sam){

    cout<<"Elements are";
    for (int i=0;i<sam.length; i++)
        cout<<endl<<sam.A[i];
}

void Insert(struct sameer *sam, int index, int x){
    int i;
    if (index>=0 && index<=sam->length)
    {
        for(i=sam->length; i>index; i--)
            sam->A[i]=sam->A[i-1];
        sam->A[index]= x;
        sam->length++;
    }

}

int main(){
    struct sameer sam = {{3,6}, 10, 6};
    Insert(&sam, 5, 10);
    Display(sam);
    
    

}