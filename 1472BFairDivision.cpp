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
return 0;
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
    if(a%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else if(a%2==0)
    {
        int b=a/2;
        if(b%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(b%2!=0)
        {
     for(int i=0;i<n;i++)
      {
        if(alvi[i]==1)
        {
            count++;
        }
      }   
    if(count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
        }
     }
}