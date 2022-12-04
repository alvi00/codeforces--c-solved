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
    int n,a=0;
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
    int b=a-n;
    if(b%2!=0)
    {
        cout<<"errorgorn"<<endl;
    }
    else
    {
        cout<<"maomao90"<<endl;
    }
}