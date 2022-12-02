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
    int a,b,c,d;
    int count=0;
    cin>>a>>b>>c>>d;
    if(a<b)
    {
        count++;
    }
    if(a<c)
    {
        count++;
    }
    if(a<d)
    {
        count++;
    }
cout<<count<<endl;
}

