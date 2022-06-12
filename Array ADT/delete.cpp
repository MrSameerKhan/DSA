#include<iostream>
using namespace std;

struct sameer
{
    int A[10], size, length;

};

int Delete(struct sameer *sam, int index)
{
    int x=0, i;

    if (index>=0 && index<sam->length)
    {
        x = sam->A[index];
        for(i=index; i <sam->length-1;i++)
            sam->A[i] = sam->A[i+1];
        sam->length--;
    }

}

void display(struct sameer sam)
{
    cout<<"Elements are"<<endl;
    for(int i=0; i<sam.length;i++)
        cout<<sam.A[i]<<endl;
}

int main()
{
    struct sameer sam={{3,5,6,7,8}, 10, 6};
    Delete(&sam,0);
    display(sam);
}