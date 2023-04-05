#include<iostream>
using namespace std;
int main()
{
    int matOne[3][3], matTwo[3][3], matSub[3][3], i, j;
    cout<<"Enter 9 Elements for First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matOne[i][j];
    }
    cout<<"Enter 9 Elements for Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matTwo[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matSub[i][j] = matOne[i][j] - matTwo[i][j];
    }
    cout<<"\nThe New Matrix (Subtraction Result) is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matSub[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}




Input:
Enter 9 Elements for First Matrix: 9 8 7 6 5 4 3 2 1
Enter 9 Elements for Second Matrix: 1 2 3 4 5 6 7 8 9

Output:
The New Matrix (Subtraction Result) is:
 8   6   4
 2   0  -2
-4  -6  -8
