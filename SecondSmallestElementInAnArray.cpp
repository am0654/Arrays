#include<iostream>

using namespace std;
int main()
{
   int i, arr[100], small, ssmall;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   small = arr[0];
   for(i=0; i<10; i++)
   {
      if(small>arr[i])
         small = arr[i];
   }
   ssmall = arr[0];
   for(i=0; i<10; i++)
   {
      if(ssmall>arr[i])
      {
         if(arr[i]!=small)
            ssmall = arr[i];
      }
   }
   cout<<"\nSecond Smallest Element = "<<ssmall;
   cout<<endl;
   return 0;
}


Output:
Enter 10 Array Elements: 4 11 12 15 9 8 7 3 2 10
Second Smallest Element: 4
