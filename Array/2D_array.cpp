#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int A[3][4]={{1,2,3,4}, {3,4,6,7}, {2,6,1,6}};
    int i, j;

    int *B[3];
    B[0]= new int[4];
    B[1]= new int[4];
    B[2]= new int[4];
/*
    int **C;
    C = new int[3];
    C[0]= new int[4];
    C[1]= new int[4];
    C[2]= new int[4];
*/
    int **C;
    C =(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            cout<<C[i][j];
        cout<<endl;
    }
}