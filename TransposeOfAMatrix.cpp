#include<iostream>
using namespace std;
int main()
{
    int mat[3][3], i, j, matT[3][3];
    cout<<"Enter 9 Elements for 3*3 Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat[i][j];
    }
    cout<<"\nOriginal Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat[i][j]<<"  ";
        cout<<endl;
    }
    // copying the transpose of given matrix to matT[][]
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matT[j][i] = mat[i][j];
    }
    cout<<"\nTranspose of Given Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matT[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}



Input:
Enter 9 Elements for 3*3 Matrix: 1 2 3 4 5 6 7 8 9
Output:
Original Matrix is 
1 2 3
4 5 6
7 8 9
Transpose of Given Matrix is:
1 4 7
2 5 8 
3 6 9
