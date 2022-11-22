#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=0;
   int n,l;
   cin>>n>>l;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
      if(arr[i]<=l)
      {
         a++;
      }
      else if(arr[i]>l)
      {
         a=a+2;
      }
   }
   cout<<a;
   
 }