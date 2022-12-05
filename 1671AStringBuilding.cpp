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
    string a;
    int flag=0;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=a[i+1])
        {
            if(a[i]!=a[i-1])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}