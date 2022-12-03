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
    string fahim="Timur";
    sort(fahim.begin(),fahim.end());
    int n;
    cin>>n;
    string alvi;
    cin>>alvi;
    sort(alvi.begin(),alvi.end());
    if(alvi==fahim)
    {
        cout<<"YES"<<endl; 
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
