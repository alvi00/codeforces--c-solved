#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      solve();
   }
   return 0;
}
void solve()
{
   int sum=0;
   int n;
   cin>>n;
   vector<int>alvi(n);
   for(int i=0;i<n;i++)
   {
      cin>>alvi[i];
   }
   for(int i=0;i<n;i++)
   {
      sum=sum+alvi[i];
   }
   if(sum%2!=0)
   {
      cout<<"YES"<<endl;
   }
   else
   {
      int flag=0,flag1=0;
      for(int i=0;i<n;i++)
      {
         if(alvi[i]%2!=0||alvi[i]==1)
         {
            flag++;
         }
         else
         {
            flag1++;
         }
      }
      if(flag!=0 && flag1!=0)
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }
   }
}