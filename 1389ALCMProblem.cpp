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
  int l,r;
  cin>>l>>r;
  if(l*2<=r)
  {
    cout<<l<<" "<<l*2<<endl;
  }
  else
  {
    cout<<-1<<" "<<-1<<endl;
  }
}
