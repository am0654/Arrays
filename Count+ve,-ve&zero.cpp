#include<iostream>
using namespace std;
int main()
{
    int pos=0, neg=0, zer=0, i, arr[10];
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    for(i=0; i<10; i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]==0)
            zer++;
        else
            neg++;
    }
    cout<<"\nFrequency of Positive Numbers: "<<pos;
    cout<<"\nFrequency of Zero: "<<zer;
    cout<<"\nFrequency of Negative Numbers: "<<neg;
    cout<<endl;
    return 0;
}

Input:
Enter 10 Numbers: 2 1 -5 9 -7 1 0 -3 -2 10
Output:
Frequency of Positive Numbers: 5
Frequency of Zero: 1
Frequency of Negative Numbers: 4
