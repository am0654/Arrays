#include<iostream>

using namespace std;
int main()
{
   int i,n, arr[100], large, slarge;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   large = arr[0];
   for(i=0; i<10; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }
   slarge = arr[0];
   for(i=0; i<10; i++)
   {
      if(slarge<arr[i])
      {
         if(arr[i]!=large)
            slarge = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<slarge;
   cout<<endl;
   return 0;
}


Output:
Enter 10 Array Elements: 4 11 2 3 5 6 7 15 8 9
Second Largest Element = 11
