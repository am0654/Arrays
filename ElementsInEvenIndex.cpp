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
      if(i%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}


Input:
Enter 10 array elements: 10 20 50 4 90 6 1 30 80 21
Output:
List of elements available on even positions: 10 50 90 6 1 80
