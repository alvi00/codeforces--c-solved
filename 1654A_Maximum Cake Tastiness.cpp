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
    int n;
    cin>>n;
    vector<int>alvi(n);
    for(int i=0;i<n;i++)
    {
        cin>>alvi[i];
    }
    sort(alvi.begin(),alvi.end());
    int large=alvi.back();
    alvi.pop_back();
    int large_2=alvi.back();
    int a=large+large_2;
    cout<<a<<endl;

}