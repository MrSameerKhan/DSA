#include<iostream>
using namespace std;

struct sameer{
    int A[10], size, length;
};

int linear_search(struct sameer sam, int index)
{
    for(int i=0; i<sam.length;i++)
        {
            if (index==sam.A[i])
                return i;
        }

}

void Display(struct sameer sam)
{
    
    cout<<"Elements are"<<endl;
    for (int i=0;i<sam.length; i++)
        cout<<i<<endl;
}

int main()
{
    struct sameer sam={{2,3,5,7,9,11}, 10, 10};
    // Display(sam);
    int j = 5;
     int r = linear_search(sam, j);
     cout<<j<<" value is present at index : "<<r;
}
