#include<iostream>

using namespace std;
int main()
{
   int arr[10], i, mul=1;
   cout<<"Enter 10 Elements for the Array: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   for(i=0; i<10; i++)
      mul = mul*arr[i];
   cout<<"\nMultiplication Result of all 10 Elements = "<<mul;
   cout<<endl;
   return 0;
}


Input:
Enter 10 Elements for the Array: 20 5 1 2 3 8 9 4 5 1
Output:
Multiplication Result of all 10 Elements = 864000
