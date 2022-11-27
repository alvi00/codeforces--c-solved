#include<bits/stdc++.h>
using namespace std;
void solve(int t);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve(t);
    }
}
void solve(int t)
{
    int n,a=0,count=0;
    cin>>n;
    vector<int>alvi(n);
    for(int i=0;i<n;i++)
    {
        cin>>alvi[i];
    }
    for(int i=0;i<n;i++)
    {
        a=a+alvi[i];
    }
    if(a%n!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
     int b=a/n;
      for(int i=0;i<n;i++)
      {
        if(alvi[i]>b)
        {
            count++;
        }
      }
      cout<<count<<endl;
    }
}
