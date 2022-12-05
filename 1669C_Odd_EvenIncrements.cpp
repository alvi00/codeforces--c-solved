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
    int n,a=0,b=0,count=0;
    cin>>n;
    vector<int>alvi(n);
    for(int i=0;i<n;i++)
    {
        cin>>alvi[i];
    }
    for(int i=0;i<n;i=i+2)
    {
        if(alvi[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>0 && b>0)
    {
       count=1;
    }
    a=0,b=0;
     for(int i=1;i<n;i=i+2)
    {
        if(alvi[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>0 && b>0)
    {
       count=1;
    }
    if(count==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
    cout<<"YES"<<endl;
    }

}