#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n,e=0,o=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
   if(arr[i]%2==0)
   {
      e++;
   }
  
  else
  {
      o++;
  }

  }
  if(e>o)
  {
   for(int i=0;i<n;i++)
   {
      if(arr[i]%2!=0)
      {
         cout<<i+1;
      }
   }
  }
  if(e<o)
  {
     for(int i=0;i<n;i++)
   {
      if(arr[i]%2==0)
      {
         cout<<i+1;
      }
   }

  }
return 0;

}
