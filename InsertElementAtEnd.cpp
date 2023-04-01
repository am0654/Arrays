#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, elem;
    cout<<"Enter 5 Array Elements: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    arr[i] = elem;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<6; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}



Output:
Enter 5 Array Elements: 10 5 8 4 3
Enter Element to Insert: 6
The New Array is:10 5 8 4 3 6
