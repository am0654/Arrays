#include<iostream>
using namespace std;
int main()
{
   int arr[10], i;
   cout<<"Enter 10 array elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   cout<<"\nList of elements available on even positions:\n";
   for(i=0; i<10; i++)
   {
      if(i%2!=0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}

Input:
Enter 10 array elements: 20 1 10 50 3 6 4 7 80 9
Output:
List of elements available on even positions:1 50 6 7 9
